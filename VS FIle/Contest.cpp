#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int mx=INT_MIN,x=0;
    for(int i=n-2;i>=0;i--)
    {
        
        mx=max(mx,a[i]);
    }
    for(int i=x;i>=1;i--)
    {
        if(a[i-1]<=a[i])
        {
            if(k>0)
            {
                int r=a[i]-a[i-1]+1;
                a[i-1]=a[i]+1;
                k=k-r;
            }
        }       
    }
    if(k>0)
    {
        for(int i=n-2;i>=1;i--)
        {
            if(a[i-1]<=a[i])
            {
                if(k>0)
                {
                    int r=a[i]-a[i-1]+1;
                    a[i-1]=a[i]+1;
                    k=k-r;
                }
            } 
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=ans)ans=a[i];
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