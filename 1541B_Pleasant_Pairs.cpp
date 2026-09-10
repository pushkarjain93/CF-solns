#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n;cin>>n;
      vector<int>a(n);
           map<int,int>f;
      for(int i=0;i<n;i++){
        cin>>a[i];
        f[a[i]]=i+1;
      }
      int ans=0;
      for(int i=3;i<=(2*n)-1;i++){
        for(int j=1;(j*j)<i;j++){
           if((i%j)==0){
               int fr = j;
               int s = (i/j);
             if(f[fr] && f[s] && ((f[fr]+f[s])==i))ans++;
           }
        }
      }
      cout<<ans<<'\n';
    }
}