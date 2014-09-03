#include "bits/stdc++.h"
using namespace std;
/*int power(int x,int n)
{
	long long int ans=1;
	while(n>0)
	{
		if(n&1)
			ans*=x;
		x*=x;
		n>>=1;
	}
	cout<<ans;
}*/
	int power(int x,int n)
{
	int temp=1;
	if(n==0)
		return 1;
	if(n==1)
		return x;
	temp=power(x,n/2);
	temp*=temp;
	if(n&1)
		temp*=x;
	cout<<temp;
}
int main()
{
	int n,ans=1,b=2;
	//cin>>n;
	/*n=7;
	while(b>0)
	{
		
		if(b%2)
			ans*=n;
		n*=n;
		b>>=1;
	}
	cout<<ans;*/
	npower(7,2);
	return 0;
}