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
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      int l = 1;
      vector<pair<int,int>>p;
      vector<int>f(n+1,-1);
      for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
          p.push_back({l,i+2});
          l=i+2;
        }
      }
      for(int i=0;i<p.size();i++){
          int x = p[i].first;
          int y = p[i].second;
          for(int j=x;j<y;j++){
            f[j]=y;
          }
      }
      // for(auto num:f){
      //   cout<<num.first<<' '<<num.second<<'\n';
      // }
      int q;cin>>q;
      while(q--){
        int x,y;
        cin>>x>>y;
        if(y<f[x] ||f[x]==-1){
          cout<<-1<<' '<<-1<<'\n';
        }
        else{
          cout<<x<<' '<<f[x]<<'\n';
        }
      }cout<<'\n';
    }
}