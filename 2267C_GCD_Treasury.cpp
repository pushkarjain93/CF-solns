#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool isp(int a){
  if(a==1)return false;
  if(a==2||a==3)return true;int x=0;
  for(int i=2;i*i<=a;i++){
     if((a%i)==0)return false;
  }
  return true;
}
vector<int>p(int x){
  vector<int>pp;
  for(int i=1;i*i<=x;i++){
    if(((x%i)==0) && isp(i))pp.push_back(i);
    if(i!=(x/i)){
      if(((x%(x/i))==0)&&isp(x/i))pp.push_back(x/i);
    }
  }
  return pp;
}
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n,x;cin>>n>>x;
      vector<int>a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      if(x==1){cout<<0<<'\n';continue;}
      vector<int>pp = p(x);
      int ans = 0;
      for(int i=0;i<pp.size();i++){
        int s =0;
        for(int j=0;j<n;j++){
          if((a[j]%pp[i])==0)s+=a[j];
        }
        ans=max(ans,s);
      }
      cout<<ans<<'\n';
    }
}