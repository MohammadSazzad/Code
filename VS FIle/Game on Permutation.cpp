#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int mn=n+1;
    int mw=n+1;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(mn<a[i] && a[i]<mw)
        {
            ans++;
            mw=a[i];
        }
        mn=min(mn,a[i]);
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