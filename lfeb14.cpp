#include "bits/stdc++.h"
using  namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n],m=0,i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>m)
				m=a[i];
		}
		int c=count(a,a+n,m);
		long long ans=1;
		for(int k=1;k<=c;k++)
		{
			ans=(ans*2)%1000000007;
		}
		cout<<ans-1<<endl;

	}
	return 0;
}