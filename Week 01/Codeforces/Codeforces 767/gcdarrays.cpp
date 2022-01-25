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
      ll l,r,k;
      cin>>l>>r>>k;
      ll odd=((r+1)/2)-l/2;
      if(k<odd && (l<r||l==1))
        cout<<"NO"<<"\n";
      else
        cout<<"YES"<<"\n";
    }
    return 0;
}
 
