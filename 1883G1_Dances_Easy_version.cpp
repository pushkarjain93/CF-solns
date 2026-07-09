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
     vector<int>a(n);
     vector<int>b(n);a[0]=1;
     for(int i=0;i<n-1;i++){
      cin>>a[i+1];
     }
     for(int i=0;i<n;i++){
      cin>>b[i];
           }
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     int i=0;int j=0;int x=0;
     while(j<n  && i<n){
      if(a[i]<b[j]){
         x++;i++;j++;
      }
      else{
        j++;
     }
      }
     cout<<(n-x)<<'\n';
    }
}