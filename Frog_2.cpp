#include<bits/stdc++.h>
#define int long long int
using namespace std;

int n,k;
vector<int>a(100005);
vector<int>dp(100005,-1);

int solve(int x)
{
    if(x==n-1) return 0;
    if(dp[x]!=-1) return dp[x];
    int p=INT_MAX;
    for(int i=1;i<=k;i++)
    {
        if(i+x<n)
        {
            p=min(p,solve(x+i)+abs(a[x+i]-a[x]));
        }
    }

    return dp[x]=p;
}

int32_t main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    solve(0);
    cout<<dp[0]<<"\n";

    return 0;
}