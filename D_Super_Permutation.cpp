#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"1\n";
        return;
    }
    if(n%2!=0)
    {
        cout<<"-1\n";
        return;
    }
    vector<int>v;
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            v.push_back(n-x);
        }
        else
        {
            v.push_back(x);
        }
        x++;
    }
    for(auto x:v)cout<<x<<" ";
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