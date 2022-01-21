#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
      ll n,m,i,j;
      cin>>n>>m;
      vector<ll> v;
      for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
            v.push_back(max(i,n-i-1)+max(j,m-j-1));
      }
      sort(v.begin(),v.end());
      for(i=0;i<n*m;i++)
        cout<<v[i]<<" ";

      cout<<"\n";
    }
    return 0;
}

