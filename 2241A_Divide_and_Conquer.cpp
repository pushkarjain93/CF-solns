#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
     int x,y;cin>>x>>y;
     if(x<y)cout<<"NO"<<'\n';
     else{
      if(x%y ==0)cout<<"YES"<<'\n';
      else cout<<"NO"<<'\n';
     }
    }
}