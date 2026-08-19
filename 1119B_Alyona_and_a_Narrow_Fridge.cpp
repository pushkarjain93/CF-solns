#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int32_t main() 
{
    fastio();
   
      int n,k;cin>>n>>k;
      vector<int>a(n);int ans=0;
      vector<int>temp;
      for(int i=0;i<n;i++){
        cin>>a[i];
        temp=a;int x=0;
        sort(temp.rbegin(),temp.rend());
        for(int i=0;i<temp.size();i+=2){
           x+=temp[i];
        }
        if(x<=k)ans=i+1;
      }
    cout<<ans;
    
}