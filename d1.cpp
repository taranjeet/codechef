#include "bits/stdc++.h"

using namespace std;
/*int power(int x,int n)
{
	long long int ans=1;
	while(n)
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
	return (temp%10000);
}
int main()
{
	int t,n,i,f,c=0;
	long long int p=1;
	cin>>t;
	while(t--)
	{
		cin>>n;
		p=1;
		c=0;
		f=sqrt(n);
		for(i=2;i<=f;i++)
			if(n%i==0)
				c++;
		p=power(n,c);
		if(f*f == n)
			p=(p/f)%10000;
		(p==0)?cout<<"0000"<<endl:cout<<p<<endl;

	}
	return 0;
}