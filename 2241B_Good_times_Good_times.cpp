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
      if(n>=1 && n<=9){
        cout<<10<<'\n';continue;
      }
      int a=log10(n)+1;
      a++;string s="";
      for(int i=0;i<a;i++){
        if(i==0 || i==a-1){
          s=s+'1';
        }
        else{s=s+'0';}
      }
      int x=stoi(s);
      cout<<x<<'\n';
    }
}