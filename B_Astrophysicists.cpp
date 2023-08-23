#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n,k,g;
    cin>>n>>k>>g;
    int x=k*g;
    int y=(g-1)/2;
    int ans=min(y*n,x);
    int z=(x-ans)%g;
    if(z>0)
    {
        ans-=y;
        int l=(y+z)%g;
        if(l*2<g)ans+=l;
        else ans-=(g-l);
    }
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