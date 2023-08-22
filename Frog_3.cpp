#include<bits/stdc++.h>
#define int long long int
using namespace std;

int n,c;
const int INF=1e15+7;
vector<int>a(200005),dp(200005,-1);

int solve(int x)
{
    if(x==n-1)return 0;
    if(dp[x]!=-1) return dp[x];
    int p=INF;
    for(int i=x+1;i<n;i++)
    {
        if(i<n)
        {
            p=min(p,solve(i)+(a[i]-a[x])*(a[i]-a[x])+c);
        }
    }

    return dp[x]=p;
}

int32_t main()
{
    cin>>n>>c;
    for(int i=0;i<n;i++)cin>>a[i];
    solve(0);
    cout<<dp[0]<<"\n";
}