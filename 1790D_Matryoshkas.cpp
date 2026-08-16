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
      vector<int>b;
      map<int,int>f;
      for(int i=0;i<n;i++){
        cin>>a[i];
        f[a[i]]++;
      }
      for(auto num:f){
        b.push_back(num.first);
      }
      sort(b.begin(),b.end());
      int ans=f[b[0]];
      for(int i=1;i<b.size();i++){
         if(b[i]-b[i-1] == 1){
           if(f[b[i]]>f[b[i-1]]){
            ans+=f[b[i]]-f[b[i-1]];
           }
         }
         else{
          ans+=f[b[i]];
         }
      }
      cout<<ans<<'\n';
    }
}