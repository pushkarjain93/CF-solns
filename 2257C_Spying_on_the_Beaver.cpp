#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n,m;cin>>n;
      vector<int>parent(n+1);
      vector<int>d(n+1);
 
      for(int i=1;i<n;i++){
        int x;cin>>x;
        parent[i+1]=x;
        d[i+1]=d[x]+1; // CHANGE
      }
      parent[1]=1;
 
      cin>>m;
      vector<int>b(m);
      for(int i=0;i<m;i++){
        cin>>b[i];
      }
 
      if(m==1){cout<<0<<'\n';continue;}
 
      int c=b[0]; 
      for(int x:b){  
        if(d[x]<d[c])
          c=x;
      }
 
      cout<<m-1;
      for (int x:b) {
        if (x!=c)
          cout<<" "<<x;
      }
      cout<<'\n';
    }
}