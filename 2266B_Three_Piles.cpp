#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      if(a>=b){
        cout<<(a-b)+c<<'\n';
      }
      else{
        if((c+a-b)>=(b-a)){
          cout<<(c+a-b)<<'\n';
        }
        else{
          cout<<(b-a)<<'\n';
        }
      }
    }
}