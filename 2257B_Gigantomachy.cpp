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
      vector<int>b(m);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      for(int i=0;i<m;i++){
        cin>>b[i];
      }
      int sa=a[n-1];int sb=b[m-1];
      for(int i=1;i<n;i++){
           sa+=abs(a[i]-a[i-1])+1;
      }
      for(int i=1;i<m;i++){
           sb+=abs(b[i]-b[i-1])+1;
      }
      if(sa>=sb)cout<<1<<'\n';
      else cout<<2<<'\n';
    }
}