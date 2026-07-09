#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int m=1e9+7;
      int n,k;cin>>n>>k;int ans=1;
      for(int i=0;i<k;i++){
        ans=ans*n;ans=ans%m;
      }
      cout<<ans<<'\n';
    }
}