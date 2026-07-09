#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n,k;cin>>n>>k;
      vector<int>a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      if(n==1){if(a[0]==k)cout<<0<<'\n';
      else cout<<-1<<'\n';continue;}
      int l=0;int r=1;int s=a[0]+a[1];
      int ans=INT_MAX;
      while(l<a.size() && r<a.size()&&l<=r){
        if(s==k){
          ans=min(ans,l+(n-r-1));r++;s+=a[r];
        }
        else if(s>k){
          s-=a[l];
            l++;
        }
        else{
           r++;s+=a[r];
        }
      }
      if(ans==INT_MAX)cout<<-1<<'\n';
      else cout<<ans<<'\n';
    }
}