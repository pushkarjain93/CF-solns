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
      vector<int>b(n);
      vector<pair<int,int>>p;
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      for(int i=0;i<n;i++){
        cin>>b[i];
        p.push_back({a[i]-b[i],i+1});
      }
      sort(p.rbegin(),p.rend());
      int x=p[0].first;int ans=0;
      vector<int>res;
      for(int i=0;i<n;i++){
        if(p[i].first == x){
          ans++;
          res.push_back(p[i].second);
        }
      }
      sort(res.begin(),res.end());
      cout<<ans<<'\n';
      for(auto num:res){
         cout<<num<<' ';
      }cout<<'\n';
    }
}