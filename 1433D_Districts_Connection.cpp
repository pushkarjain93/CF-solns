#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
class dsu{
   vector<int>rank;
   vector<int>parent;
   public:
    dsu(int n){
   rank.resize(n,0);
   parent.resize(n);
   for(int i=0;i<n;i++){
    parent[i]=i;
   }
   }
   int findultpar(int i){
      if(parent[i]==i)return i;
     return parent[i]=findultpar(parent[i]);
   }
   void pc(int x, int y){
     int ux=findultpar(x);
     int uy=findultpar(y);
     if(rank[ux]<rank[uy]){
      parent[ux]=uy;
     }
    else if(rank[ux]>rank[uy]){
      parent[uy]=ux;
     }
     else{
      parent[ux]=uy;
      rank[uy]++;
     }
   }
};
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
      dsu ds(n);
      vector<pair<int,int>>ans;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(i==j || a[i]==a[j])continue;
          if(ds.findultpar(i)!=ds.findultpar(j)){
            ans.push_back({i+1,j+1});
            ds.pc(i,j);
          }
        }
      }
      if(ans.size()==0)cout<<"NO"<<'\n';
      else{
        cout<<"YES"<<'\n';
        for(auto num:ans){
          cout<<num.first<<' '<<num.second<<'\n';
        }
      }
    }
}