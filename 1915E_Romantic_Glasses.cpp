#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 int ss(vector<int>& a, int k) {
        map<int,int>f;int n=a.size();int x=0;int cnt=0;
        f[0]=1;
        for(int i=0;i<n;i++){
             x=x+a[i];
             cnt=cnt+f[x-k];
             f[x]++;
        }
        return cnt;}
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n;cin>>n;
      vector<int>a(n);
      
      for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2){a[i]=-a[i];}
      }
      int cnt = ss(a,0);
      if(cnt>0)cout<<"YES"<<'\n';
      else cout<<"NO"<<'\n';
    }
}