#include "bits/stdc++.h"
using namespace std;
int main()
{
	long long int n,k;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		if(k==0)
			printf("0 %lld\n",n);
		else
			printf("%lld %lld\n",n/k,n%k);
	}
	return 0;

}