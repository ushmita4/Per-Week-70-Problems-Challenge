#include <bits/stdc++.h>
#include <iostream>
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
	  cout<<n<<" ";
	  while(n>1)
	  {
	      if(n%2==0)
	      {
	          n=n/2;
	          cout<<n<<" ";
	      }
	      else
	      {
	          n=n*3;
	          n=n+1;
	          cout<<n<<" ";
	      }
	  }
	  cout<<"\n";
	}
	return 0;
}
