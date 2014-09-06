#include "bits/stdc++.h"
#define u(x) scanf("%d",&x)
using namespace std;
int main()
{
	int t,n,c,q,l,r;
	u(t);
	while(t--)
	{
		u(n);u(c);u(q);
		while(q--)
		{
			u(l);u(r);
			if(c>=l && c<=r)
			c=(l+r)-c;
		}
		printf("%d\n",c);
	}
	return 0;
}