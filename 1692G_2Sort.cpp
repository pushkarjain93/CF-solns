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
      }
      int x=1;int ans=0;
      for(int i=0;i<n-1;i++){
        if(a[i]<(2*a[i+1]))x++;
        else{
          ans=ans+max(0ll,x-k);x=1;
        }
      }ans=ans+max(0ll,x-k);
      cout<<ans<<'\n';
    }
}