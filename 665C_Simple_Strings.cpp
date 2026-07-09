#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    string s;cin>>s;
    int n=s.size();
    if(n==1){
      cout<<s;
    }
    else{
    for(int i=0;i<n-1;i++){
      if(s[i]==s[i+1]){
         if(i==n-2){
          if(s[i]=='z'){s[i+1]='y';}
           else{s[i+1]=(char)s[i]+1;}
         }
       else{
            char p=s[i];char q=s[i+2];
            if((p=='a' && q=='z') || (p=='z' && q=='a')){s[i+1]='b';}
            else if((p=='a' && q!='z') ||(p!='z' && q=='a')){s[i+1]='z';}
            else if((p=='z' && q!='a') ||(p!='a' && q=='z')){s[i+1]='a';}
            else{s[i+1]=(char)(max(p,q)+1);}
         }
      }
    }
    cout<<s;
    }
}