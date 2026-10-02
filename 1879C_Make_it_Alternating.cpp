#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int M = 998244353;
  
int32_t main() 
{
    fastio();
    vector<int>dp(300001);
      dp[0]=1;
      dp[1]=1;
      for(int i=2;i<=300000;i++){
        dp[i]=(i*1ll*dp[i-1])%M;
      }
    int t;cin>>t;
    while(t--){
      string s;cin>>s;
      int x = 1;
      vector<int>a;int mx =0;
      for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
           x++;
           if(i==s.size()-2){
            a.push_back(x);
           }
        }
        else{
           if(x>1)a.push_back(x);x=1;
        }
      }
      int xx = 0;
      if(a.size()!=0){
      int ss = accumulate(a.begin(),a.end(),0ll);
      xx=ss-a.size();
      }
        cout<<xx<<' ';
      int ans = 1;
      for(int i=0;i<a.size();i++){
       ans=(ans*1ll*a[i])%M;
      }
      int xz = a.size();
      ans=((ans)*1ll*(dp[xx]))%M;
     cout<<ans<<'\n';
    }
}