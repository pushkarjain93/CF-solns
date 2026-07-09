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
      int ans=0;int d;
      for(int i=1;i<=n;i++){
        d=(n/i);
        ans=ans+(d*1LL*d);
      }cout<<ans<<'\n';
    }
}