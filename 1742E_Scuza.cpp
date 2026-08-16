#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n,q;cin>>n>>q;
      vector<int>a(n);
      vector<pair<int,int>>b(q);
      for(int i=0;i<n;i++)cin>>a[i];
      vector<int>p(n);p[0]=a[0];
      vector<int>ans(q);
      for(int i=1;i<n;i++){
        p[i]=p[i-1]+a[i];
      }
      for(int i=0;i<q;i++){cin>>b[i].first;b[i].second=i;}
      sort(b.begin(),b.end());
      int i = 0;
      for(int l=0;l<q;l++){
      while(a[i]<=b[l].first && i<n){
        i++;
       }
       if(i>=1 || i == n){
        ans[b[l].second]=p[i-1];
       }
       else{
         ans[b[l].second]=0;
       }
      }
    for(auto num:ans){cout<<num<<' ';}
    cout<<'\n';
    }
}