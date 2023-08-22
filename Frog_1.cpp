#include<bits/stdc++.h>
#define int long long int
using namespace std;

int n;
vector<int>a(100005);
vector<int> dp(100005,-1);

int solve(int x)
{
    if(x==n-1) return 0;
    if(dp[x]!=-1) return dp[x];
    int p=INT_MAX,q=INT_MAX;
    if(x+1<n) p=solve(x+1)+abs(a[x+1]-a[x]);
    if(x+2<n) q=solve(x+2)+abs(a[x+2]-a[x]);

    return dp[x]=min(p,q);
}

int32_t main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    solve(0);
    cout<<dp[0]<<"\n";

    return 0;
}