#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;cin>>t;
    while(t--){
      int n,m;cin>>n>>m;
      vector<char>v(n);
      vector<string>b(m);
      map<char,int>mp;
      for(int i=0;i<n;i++){
        string temp;
          cin>>temp;
          v[i]=temp[0];
          mp[v[i]]++;
      }
      for(int i=0;i<m;i++){
         cin>>b[i];
      }
      bool x =true;
      for(int i=0;i<m;i++){
        for(int j=0;j<b[i].size();j++){
          char c = tolower(b[i][j]);
          if(mp[c]>0){
             continue;
          }
          else {x=false;break;}
        }
        if(x==false)break;
      }
      if(x)cout<<"YES"<<'\n';
      else cout<<"NO"<<'\n';
    }
}