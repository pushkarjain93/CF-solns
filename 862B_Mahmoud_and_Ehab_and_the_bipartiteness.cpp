#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void dfs(vector<vector<int>>&adj,vector<int>&col,int par){
   for(auto num:adj[par]){
    if(col[num]!=-1 )continue;
      col[num]=col[par]^1;
      dfs(adj,col,num);
   }
}
int32_t main() 
{
    fastio();
      int n;cin>>n;
      vector<vector<int>>adj(n+1);
      vector<int>col(n+1,-1);
      col[1]=0;
      int x,y;
      for(int i=1;i<n;i++){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
      }
 
    dfs(adj,col,1);
     
      int z=0;int o=0;
      for(auto num:col){
        if(num==0)z++;
        else if(num==1)o++;
      }
      int ans=0;
      
      for(int i=1;i<=n;i++){
           int s = adj[i].size();      
        if(col[i]==1){
           if(z>s)ans+=(z-s);
        }
        else{   
          if(o>s)ans+=(o-s);
        }
      }
      cout<<ans/2<<'\n';
}