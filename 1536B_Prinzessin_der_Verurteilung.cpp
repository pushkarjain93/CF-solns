#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
string ss(int n,string s){
  string temp ="";
 for(char i = 'a' ; i<='z';i++){
     if(s.find(i)==string::npos){temp+=i;return temp;}
      }
 for(char i = 'a';i<='z';i++){
  temp=i;
     for(char j ='a';j<='z';j++){
      temp+=j;
      if(s.find(temp)==string::npos){return temp;}
      temp.pop_back();
     }
  }temp="";
 for(char i = 'a';i<='z';i++){
  temp=i;
     for(char j ='a';j<='z';j++){
      temp+=j;
      for(char k ='a';k<='z';k++){
        temp+=k;
        if(s.find(temp)==string::npos){return temp;}
      temp.pop_back();
      }
      temp.pop_back();
     }
  }
      return temp;
}
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n;cin>>n;
      string s;cin>>s;
     cout<<ss(n,s)<<'\n';
    }
}