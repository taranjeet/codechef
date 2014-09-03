#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		int flag=0;
		if(n==1 && a[0]==0)flag=1;
		else
		{
			if(a[0]==0)
			{
				long long int s=1;
				for(i=1;i<n;i++)
				{
					if(a[i]!=s){flag=0;break;}s*=2;
				}
				if(i==n){flag=1;}
			}


		}
		if(flag)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}