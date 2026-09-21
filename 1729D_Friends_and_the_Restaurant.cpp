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
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      for(int i=0;i<n;i++){
        cin>>b[i];
      }
      vector<int>v;
      vector<int>vv;
      for(int i=0;i<n;i++){
        if(b[i]>=a[i])v.push_back(b[i]-a[i]);
        else vv.push_back(a[i]-b[i]);
      }
      sort(v.begin(),v.end());
      sort(vv.begin(),vv.end());
      int x=v.size();
      int ans = 0;
      int i = 0;int j=0;
      while(i<v.size()&&j<vv.size()){
        if(v[i]>=vv[j]){i++;x--;ans++;j++;}
        else{
          i++;
        }
      }
      ans+=(x/2);
      cout<<ans<<'\n';
    }
}