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
	   string s="";
	 
	   for(ll i=0;i<n;i++)
	   {
	      if(i%3==0)
	      s=s+'a';
	      else
	      {
	          if(i%3==1)
	          s=s+'b';
	          else
	          s=s+'c';
	      }
	   }
	   cout<<s<<"\n";
	}
	return 0;
}
