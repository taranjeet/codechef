#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,n,i,c=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		char a[n];
		c=0;
		scanf("%s",a);
		if(n==1 && a[0]=='0')c++;
		else if(n==1 && a[0]=='1')c=0;
		else
		{
		for(i=1;i<n-1;i++)
		{
			/*if(a[i]=='1')
				{
					c++;
					if(a[i-1]=='0' && i>0)c++;
					if(a[i+1]=='0' && i+1<n)c++;
				}*/
				if(a[i-1]=='0' && a[i]=='0' && a[i+1]=='0')c++;
		}
		if(a[0]=='0' && a[1]!='1')c++;
		if(a[n-1]=='0' && a[n-2]!='1')c++;	
		}
				
		printf("%d\n",c);
	}
	return 0;
}