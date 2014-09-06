#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,i,n,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int s=1;
		for(i=sqrt(n);i>=1;i--)
			{
				if(n%i==0)
				{s=i;
		ans=abs(s-(n/s));break;}
	}
		printf("%d\n",ans);
	}
	return 0;
}