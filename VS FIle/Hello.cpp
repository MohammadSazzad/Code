#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
   int n,k;
   cin>>n>>k;
   vector<int>a(n+2);
   a[0]=0;
   for(int i=1;i<=n;i++)
   {
      cin>>a[i];
   }
   int mi=-1;
   for(int i=1;i<=n-1;i++)
   {
      if(a[i]>=a[i-1])
      {
         mi=i;
      }
   }
   cout<<mi<<"/n";
}

int32_t main()
{
   int t;
   cin >> t;
   while(t--)
   {
      solve();
   }
   return 0;
}