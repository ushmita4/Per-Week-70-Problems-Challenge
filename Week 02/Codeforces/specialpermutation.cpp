#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int ll;

int main(){
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,a,b;
      cin>>n>>a>>b;
      if(a<=n/2 && b>=(n/2)+1 || a==n/2+1 && b==n/2)
      {
          cout<<a<<" ";
          for(int i=n;i>=1;i--)
          {
              if(i!=a && i!=b)
                cout<<i<<" ";
          }
          cout<<b<<"\n";
      }
      else
        cout<<-1<<"\n";
  }
}


