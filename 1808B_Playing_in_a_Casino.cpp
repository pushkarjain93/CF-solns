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
      vector<vector<int>>a(n,vector<int>(m));
      for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        cin>>a[i][j];
       }
      }
      if(n==1){cout<<0<<'\n';continue;}
      for(int j=0;j<m;j++){
      vector<int>temp;int x=0;
        for(int i=0;i<n;i++){
          temp.push_back(a[i][j]);
        }
        sort(temp.begin(),temp.end());
        for(int k=0;k<n;k++){
          a[k][j]=temp[x];x++;
        }
      }int ans=0;
         for(int j=0;j<m;j++){
       for(int i=0;i<n;i++){
        ans=ans-(a[i][j]*(n-i-1))+(a[i][j]*(i));
       }
      }cout<<ans<<'\n';
    }
}