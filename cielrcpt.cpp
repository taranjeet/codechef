#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,n,y,z,ans;
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>n;
		z=n%2048;
		y=n/2048;
		ans+=y;
		bitset<64> b;
		b=z;
		ans+=b.count();
		/*while(z)
		{
			ans+=(z&1);
			z>>=1;
		}*/
		cout<<ans<<endl;
	}
	return 0;
}