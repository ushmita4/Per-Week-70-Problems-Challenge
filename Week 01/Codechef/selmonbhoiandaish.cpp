#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool comp(pair<ll,ll> p,pair<ll,ll> q){
    if (p.second == q.second) {
        return p.first < q.first;
    }
    return p.second < q.second;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
	  ll n,k;
	  cin>>n>>k;
	  vector<pair<ll,ll>> a(n);
	  for(ll i=0;i<n;i++)
	  {
	      ll x,y;
	      cin>>x>>y;
	      a[i].first=x+y;
	      a[i].second=(x*x)+(y*y);
	  }
	  sort(a.begin(), a.end(), comp);
	  ll sum=0;
	  for(ll i=0;i<k;i++) {
	        sum += a[i].first;
	        
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
