#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n,k;cin>>n>>k;
      vector<int>a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }sort(a.begin(),a.end());
      int mn=a[0];
      for(int i=1;i<n;i++){
        mn=min(abs(a[i]-a[i-1]),mn);
      }
      if(k>=3)cout<<0<<'\n';
      else if(k==1){
        cout<<mn<<'\n';
      }
      else{
        vector<int>v;
        for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
            v.push_back(abs(a[j]-a[i]));
          }
        }
        for(int i=0;i<v.size();i++){
          int x=upper_bound(a.begin(),a.end(),v[i])-a.begin();
          if(x==0){
            mn=min(mn,abs(a[x]-v[i]));
          }
          else{
            mn=min(mn,abs(a[x]-v[i]));
            mn=min(mn,abs(a[x-1]-v[i]));
          }
        }cout<<mn<<'\n';
      }
    }
}