#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n,ans=0;
    cin>>n;
    map<int,int>m1,m2,m3,m4;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        m1[x]++;
        m2[y]++;
        m3[x-y]++;
        m4[x+y]++;
    }
    for(auto x:m1)ans+=x.second*(x.second-1);
    for(auto x:m2)ans+=x.second*(x.second-1);
    for(auto x:m3)ans+=x.second*(x.second-1);
    for(auto x:m4)ans+=x.second*(x.second-1);

    cout<<ans<<"\n";
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}