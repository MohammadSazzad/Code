#include<bits/stdc++.h>
#define int long long int
using namespace std;

int dp[100005];

int solve(int n)
{
    if(n==1)return 1;
    if(n==2)return 2;
    if(dp[n]!=-1)return dp[n];

    return dp[n]=solve(n-1)+solve(n-2);
}

int32_t main()
{
    int n;
    cin>>n;
    dp[0]=0;
    for(int i=1;i<=n;i++)dp[i]=-1;
    solve(n);

    cout<<dp[n]<<"\n";

    return 0;
}