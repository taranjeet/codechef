#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n+1],i,j;
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		int ans=0;
		if(n==1)
			ans=1;
		else
		{
			int c1=0,c2=0;
			for(i=1;i<n;i++)
			{
				for(j=i+1;j<=n;j++)
					if(a[i]>a[j])
						c1++;
			}
			for(i=1;i<n;i++)
				if(a[i]>a[i+1])
					c2++;
			if(c1==c2)ans=1;
		}
		if(ans)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}