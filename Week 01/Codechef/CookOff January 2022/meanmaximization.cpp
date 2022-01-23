#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    ll sum=0;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum=sum+a[i];
	    }
	    sort(a,a+n);
	  
	    double ans1=0,ans2=0;
	    for(ll i=n-1;i>=1;i--)
	    {
	        ans2=ans2+a[i];
	        sum=sum-a[i];
	        ans1=max(ans1,(1.0)*ans2/(n-i)+(1.0)*(sum)/i);
	    }
	    printf("%.6f\n",ans1);
	}
	return 0;
}
