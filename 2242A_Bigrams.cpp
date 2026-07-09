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
      vector<int>a(n);vector<int>v(4,0);
      for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=3)v[3]++;
        else {v[a[i]]++;}
      }
      if(v[3]>=1 || v[2]>=2)cout<<"YES"<<'\n';
      else cout<<"NO"<<'\n';
    }
}