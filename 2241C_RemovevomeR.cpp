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
      string s;
        cin>>s;
        int x=1;
        for(int i=1;i<n;i++){
          if(s[i]!=s[i-1])x++;
        }
        int ans=0;
        if(x==1)
            ans=1;
        else if(x==2)
            ans=2;
        else
            ans=1;
        cout<<ans<<"\n";
      
    }
}