#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int i=0,j=n-1,l=0,r=0,kl=k,kr=k;
    if(v[0]==v[n-1])
    {
        kl=k/2;
        kr=k-kl;
    }
    for(;i<n && l<kl;i++)
    {
        if(v[i]==v[0])l++;
    }
    for(;j>=0 && r<kr;j--)
    {
        if(v[j]==v[n-1])r++;
    }
    return i-1<j+1;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        if(solve())cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
