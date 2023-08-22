#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int mx=*max_element(v.begin(),v.end());
    int x=mx*(mx+1)/2;
    //cout<<x<<"\n";
    for(int i=0;i<n;i++)
    {
        x-=v[i];
    }
    if(x==k)
    {
        cout<<"YES\n";
        return;
    }
    while(x<=k)
    {
        mx++;
        x+=mx;
        if(x==k)
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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