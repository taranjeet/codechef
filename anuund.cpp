#include "bits/stdc++.h"
#define u(x) scanf("%d",&x)
using namespace std;
void swap(int *a,int *b){int t=*a;*a=*b;*b=t;}
int main()
{
	int t,n,i;
	u(t);
	while(t--)
	{
		u(n);
		int a[n];
		for(i=0;i<n;i++)
			u(a[i]);
		sort(a,a+n);
		for(i=1;i<n-1;i+=2)
			swap(&a[i],&a[i+1]);
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\n");

	}

	return 0;
}