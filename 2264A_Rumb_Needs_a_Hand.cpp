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
      vector<int>a(n);
      vector<int>b;
      for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]!=(i+1)){b.push_back(a[i]);}
      }
      reverse(b.begin(),b.end());int j=0;
      for(int i=0;i<n;i++){
         if(a[i]!=(i+1)){a[i]=b[j];j++;}
      }
      if(is_sorted(a.begin(),a.end()))cout<<"YES"<<'\n';
      else cout<<"NO"<<'\n';
    }
}