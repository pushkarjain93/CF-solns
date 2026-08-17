#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int fn(int n,int k){
      int ans=k%n;
   if(n%2==0){
      if(ans==0)return n;
    }
    else{
      int x = n/2;
      ans=k-1+(k+x-1)/x;
      ans=ans%(n);
    if(ans==0)return n;
    
    }
    return ans;
}
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int ans= fn(n,k);
    cout<<ans<<'\n';
  }
}