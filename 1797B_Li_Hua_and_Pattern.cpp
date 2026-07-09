#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void rot(vector<vector<int>>&v,int n){
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
     swap(v[i][j],v[j][i]);
    }
    reverse(v[i].begin(),v[i].end());
   }
}
 
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n,k;cin>>n>>k;
      vector<vector<int>>v(n,vector<int>(n));
      vector<vector<int>>a;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cin>>v[i][j];
        }
      }
      if(n==1){cout<<"YES"<<'\n';continue;}a=v;
      rot(v,n);
      rot(v,n);int x=0;
        for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
          if(a[i][j]!=v[i][j])x++;
        }
      }
        for(int i=0;i<n;i++){
        for(int j=i;j<n/2;j++){
          if(i==j){
          if(a[i][j]!=v[i][j])x++;}
        }
      }
      if(x>k) cout<<"NO"<<'\n';
      else{
        k=k%2;x=x%2;
      if(x==k || (n%2==1))cout<<"YES"<<'\n';
       else cout<<"NO"<<'\n';}
    }
    
}