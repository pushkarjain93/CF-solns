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
      for(int i=0;i<n;i++)
      {cin>>a[i];int x=log2(a[i]);
      a[i]=x;
      }
      unordered_map<int,int>f;int ans=0ll;
      for(int i=0;i<n;i++){
        f[a[i]]++;
      }
      for(auto num:f){
        int r=num.second;
        ans+=1ll*((r)*(r-1))/2;
      }
      cout<<ans<<'\n';
    }
}