#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n,c;cin>>n>>c;
      vector<int>a(n);
      vector<int>b(n);
      int x=0;int y=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      for(int i=0;i<n;i++){
        cin>>b[i];
      }
      bool xx=true;bool yy=true;
     for(int i=0;i<n;i++){
      if(a[i]>=b[i]){
          y=y+a[i]-b[i];
      }
      else{
        xx=false;break;
      }
     }
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());x=x+c;
     for(int i=0;i<n;i++){
        if(a[i]>=b[i]){x=x+a[i]-b[i];}
        else{yy=false;break;}
     }
     if(yy==0)cout<<-1<<'\n';
     else if(xx==0){
      cout<<x<<'\n';
     }
     else if(xx==1){
      cout<<min(x,y)<<'\n';
     }
    }
}