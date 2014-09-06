#include "bits/stdc++.h"
#define u(x) scanf("%d",&x)
using namespace std;
int main()
{
	int t,n,k,s,c,i,c2;
	u(t);

	/*scanf("%d",&t);*/
	while(t--)
	{
		u(n);u(k);
		/*scanf("%d%d",&n,&k);*/
		s=0,c=0,c2=0;
		int a[n];
		for(i=0;i<n;i++)
		{
			u(a[i]);s+=a[i];
		}
		sort(a,a+n);
		if(k>n-k)k=n-k;
		for(i=0;i<k;i++)
			c+=a[i];
		/*for(i=k;i<n;i++)
			c2+=a[i];*/
		printf("%d\n",abs((s-c)-c));
	}
	return 0;
}