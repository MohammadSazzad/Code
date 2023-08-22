#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n),ans;
    for(int i=0;i<n;i++)cin>>v[i];
    int r=0,mx=0;
    for(int i=0;i<n;i++)
    {
        if(v[min(n-1,r+1)]<=v[min(n-1,i+1)])r=i;
    }
    for(int i=r+1;i<n;i++)ans.push_back(v[i]);
    ans.push_back(v[r]);
    for(int i=r-1;i>=0;i--)
    {
        if(v[i]>v[0])ans.push_back(v[i]);
        else
        {
            for(int j=0;j<=i;j++)ans.push_back(v[j]);
            break;
        }
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<"\n";
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