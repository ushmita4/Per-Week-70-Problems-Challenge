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
      ll n,k,f=0;
      cin>>n>>k;
      vector<pair<ll,ll>> a(n);
      for(ll i=0;i<n;i++)
      {
          cin>>a[i].first;
      }
      for(ll i=0;i<n;i++)
      {
          cin>>a[i].second;
      }
      sort(a.begin(),a.end());
      for(ll i=0;i<n;i++)
      {
          if(a[i].first<=k)
            k=k+a[i].second;
          else
          {
              f=1;
              break;
          }
      }
      cout<<k<<"\n";
    }
    return 0;
}
 
