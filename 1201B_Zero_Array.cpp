#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
      int n;cin>>n;
      vector<int>a(n);int s=0;
      for(int i=0;i<n;i++){
        cin>>a[i];s=s+(1ll*a[i]);
      }
      sort(a.rbegin(),a.rend());
      if((s%2) == 1)cout<<"NO";
      else{
      s=s-a[0];
        if(a[0]>s){cout<<"NO";}
        else {cout<<"YES";}
      }
}