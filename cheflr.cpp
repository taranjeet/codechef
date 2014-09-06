//september long 14


#include "bits/stdc++.h"
using namespace std;
#define MOD 1000000007
#define LEN 100001
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[LEN];
		scanf("%s",a);
		long long int s=1,i;
		for(i=0;a[i];i++)
		{
			if((i+1)&1)		//odd
			{
				if(a[i]=='l')s=(2*(s))%MOD;
				else if(a[i]=='r')s=(2*(s))%MOD+2;
			}
			else			//even
			{
				if(a[i]=='l')s=(2*(s))%MOD-1;
				else s=(2*(s))%MOD+1;
			}

		}
		
		printf("%lld\n",s%MOD);
	}
	return 0;
}