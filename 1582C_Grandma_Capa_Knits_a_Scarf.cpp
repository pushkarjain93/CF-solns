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
      string s;cin>>s;
      int l=0;int h=n-1;
      char a='1';char b='2';
      for(int i=0;i<n/2;i++){
         if(s[i]!=s[n-i-1]){
          a=s[i];b=s[n-i-1];break;
         }
      }
      if(a=='1'){
        cout<<0<<'\n';continue;
      }
        bool x =true;
        bool y =true;
      int ans1=0;
      while(l<=h && l<n && h>=0){
        if(s[l]==s[h]){l++;h--;continue;}
       else{
          if(s[l]==a){
            ans1++;l++;
          }
          else if(s[h]==a){
            ans1++;h--;
          }
          else{
            x=false;break;
          }
       } 
      }
      l=0;h=n-1;int ans2=0;
      while(l<=h && l<n && h>=0){
        if(s[l]==s[h]){l++;h--;continue;}
       else{
          if(s[l]==b){
            ans2++;l++;
          }
          else if(s[h]==b){
            ans2++;h--;
          }
          else{
            y=false;break;
          }
       }
       }
     
       if(x==false && y==false)cout<<-1<<'\n';
       else{
           if(x==true && y== true){
            cout<<min(ans1,ans2)<<'\n';
           } 
           else if(x==true){
              cout<<ans1<<'\n';
           }
           else{
              cout<<ans2<<'\n';
           }
           }
      
    }
}