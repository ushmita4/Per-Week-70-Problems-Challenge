#include<bits/stdc++.h>
using namespace std;
int T,n,m,r,c,ans=0;
string s;
bool f;
int main()
{
    for(cin>>T;T;T--)
    {
    	cin>>n>>m>>r>>c,f=1,ans=2,r--,c--;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			for(int j=0;j<m;j++)
			{
				if(s[j]=='B')
				{
					if(i==r&&c==j)ans=0;
					else if(i==r||j==c)ans=min(ans,1);
					f=0;
				}

			}
		}

		if(f)cout<<"-1\n";
		else cout<<ans<<endl;
	}
    return 0;
}
