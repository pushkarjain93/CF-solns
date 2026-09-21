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
      vector<int>a(3);
      int mn = INT_MAX;
      for(int i=0;i<3;i++){
        cin>>a[i];
        mn=min(mn,a[i]);
      }
   cout<<n-mn<<'\n';
    }
}