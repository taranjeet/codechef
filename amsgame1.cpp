#include "bits/stdc++.h"
using namespace std;
int gcd(int a,int b)
{
	if(b>a)
		return gcd(b,a);
	if(a%b==0)
		return b;
	else return gcd(b,a%b);
}
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
		int g=gcd(a[0],a[1]);
		//cout<<g<<" ";
		for(i=2;i<n;i++)
		{
			//cout<<gcd(a[i],a[i+1])<<" ";
			g=gcd(g,a[i]);
		}
			
		printf("%d\n",g);
	}
	return 0;

}