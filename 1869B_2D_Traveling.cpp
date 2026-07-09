#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n,k,a,b;
      cin>>n>>k>>a>>b;
      vector<pair<int,int>>v(n); int mn,m1,m2;
      for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
      }
    mn=abs(v[a-1].first-v[b-1].first)+abs(v[a-1].second-v[b-1].second);
    m1=1e10;m2=m1;
    for(int i=0;i<k;i++){
      m1=min(m1,abs(v[a-1].first-v[i].first)+abs(v[a-1].second-v[i].second));
      m2=min(m2,abs(v[b-1].first-v[i].first)+abs(v[b-1].second-v[i].second));
    }
    mn=min(mn,m1+m2);cout<<mn<<'\n';
    }
}