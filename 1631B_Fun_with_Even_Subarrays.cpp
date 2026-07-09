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
      vector<int>a(n);int ans=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      int x=a[n-1];int i=n-2;
      while(i>=0){
        if(a[i]!=x){
          ans++;i=i-(n-i-1);
        }
        else{
          i--;
        }
      }
    cout<<ans<<'\n';
    }
}