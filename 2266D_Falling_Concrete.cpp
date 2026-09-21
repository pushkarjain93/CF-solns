#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() 
{
    fastio();
    int t;
    cin>>t;
    while (t--) {
        int n;cin>>n;
        set<int> st;
        for (int i=1;i<=n;i++) {
            int a;cin>>a;
            st.insert(a-i);
        }
        int ans = 0;
        for (int x:st) {
            if(st.count(x-1))continue;
            int len=1;
            while(st.count(x + len)) {
                len++;
            }
            ans=max(ans,len);
        }
        cout<<ans<< '\n';
    }
}