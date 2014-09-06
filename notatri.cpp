//verdict : TLE

#include "bits/stdc++.h"
using namespace std;
int main()
{
	int n,i,c,j,k;
	while(1)
	{
		scanf("%d",&n);
		if(!n)break;
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		c=0;
		for(i=0;i<n-2;i++)
		{
			for(j=i+1;j<n-1;j++)
			{
				for(k=n-1;k>=0;k--)
				{
					if(a[i]+a[j]<a[k])c++;
					else break;
				}
			}
		}
		printf("%d\n",c);
	}
	return 0;

}