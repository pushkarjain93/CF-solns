#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n,m;cin>>n>>m;
      vector<int>a(m);
      for(int i=0;i<m;i++){
        cin>>a[i];
      }
      if(m==1){cout<<(2)<<'\n';continue;}
      sort(a.begin(),a.end());
      vector<int>v;
      for(int i=0;i<m-1;i++){
            v.push_back(a[i+1]-a[i]-1);
      }
          v.push_back(n-(a[m-1]-a[0])-1);
          sort(v.rbegin(),v.rend());
          int s=0;int x=0;
          for(int i=0;i<v.size();i++){
            v[i]=max(v[i]-x,0ll);
            if(v[i]==0)continue;
            if(v[i]<=2){
               s++;x+=4;
            }
             else{
               s+=(v[i]-1);
               x+=4;
             }
          }
          int ans = n-s;
          cout<<ans<<'\n';
    }
}