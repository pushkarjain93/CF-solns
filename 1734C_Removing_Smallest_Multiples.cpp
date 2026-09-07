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
      string s;
      cin>>s;
      vector<int>v(n+1,0);
      for(int i=0;i<n;i++){
        if(s[i]=='1')continue;
        else{
          for(int j=i+1;j<=n;j=j+i+1){
            if(s[j-1]=='1')break;
              if(v[j]==0)v[j]=i+1;
          }
        }
      }
      int ans = accumulate(v.begin(),v.end(),0ll);
      cout<<ans<<'\n';
    }
}