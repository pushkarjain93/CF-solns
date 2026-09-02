#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n;cin>>n;bool xx= false;
      if(n<7){cout<<"NO"<<'\n';continue;}
      for(int k=2;k*k+k+1<= n;k++){
        int d = n*(k-1);
        d++;
        int p=k;int x = 1;
        while(p<=d){
           if(p==d && x>=3){cout<<"YES"<<'\n';xx=true;break;}
           p=p*1ll*k;x++;
        }
        if(xx)break;
    }
    if(xx==false)cout<<"NO"<<'\n';
}
}