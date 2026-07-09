#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n,x;cin>>n>>x;
      vector<int>a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      vector<pair<int,int>>v(x+1,{0,0});
      unordered_map<int,int>f;
      for(int i=0;i<n;i++){
        if(f.find(a[i])!=f.end()){
          int k=i-f[a[i]]-1;
          if(k>=v[a[i]].first){
           v[a[i]].second=v[a[i]].first;
           v[a[i]].first=k;
          }
          else if(k>v[a[i]].second){
            v[a[i]].second=k;
          }
        }
        else{
          v[a[i]].first=i;
        }
        f[a[i]]=i;
      }
      for(int i=1;i<=x;i++){
         int k=n-f[i]-1;
          if(k>=v[i].first){
          v[i].second=v[i].first;
           v[i].first=k;          }
          else if(k>v[i].second){
            v[i].second=k;
          }
          }
      int ans=INT_MAX;int y=0;
      for(auto num:v){
        if(y==0){y=-1;continue;}
   int mx=max(num.first/2,num.second);
        ans=min(ans,mx);}
      cout<<ans<<'\n';}
              }
  
 