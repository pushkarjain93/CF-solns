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
      vector<int>oo;
      vector<int>zz;int ans=INT_MAX;
      if(s[0]=='1'){
        int ans = count(s.begin(),s.end(),'0');
        cout<<ans<<'\n';
        continue;
      }
        int o=0;
      oo.push_back(0);
      for(int i=0;i<n;i++){
        if(s[i]=='1'){
          o++;
        }
          oo.push_back(o);
 
      }
      int e=0;
      for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
          e++;
        }
          zz.push_back(e);
      }
      reverse(zz.begin(),zz.end());
      zz.push_back(0);
 
  for(int i=0;i<oo.size();i++){
    ans=min(ans,oo[i]+zz[i]);
  }
      cout<<ans<<'\n';
    }
}