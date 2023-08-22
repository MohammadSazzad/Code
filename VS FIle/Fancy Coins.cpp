#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int m,k,a1,ak,ans=0;
    cin>>m>>k>>a1>>ak;
    int x=0;
    if(m/k-ak>0)
    {
        x=m/k-ak;
    }
    int p=(m%k)-a1;
    int y=0;
    if(p>0)
    {
        y=p;
    }
    int z=0;
    if(a1-m%k>0)
    {
        z=a1-m%k;
    }
    int r=z/k;
    int q=0;
    if(r<=x)
    {
        q=r;
    }
    else
    {
        q=x;
    }
    ans=x+y-q;

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