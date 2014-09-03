#include "bits/stdc++.h"
using namespace std;
int gcd(int a,int b)
{

	if(b>a)
		return gcd(b,a);
	if(a%b==0)
		return b;
	else
		return gcd(b,a%b);
}
int main()
{
	int t,n,mi,flag=0,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],temp[n];
		mi=1001;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		mi=1001;
		for(i=0;i<n-1;i++)
		{
			mi=min(mi,gcd(a[i],a[i+1]));
		}
		//cout<<mi<<endl;
		for(i=0;i<n;i++)
		{
			a[i]/=mi;
			cout<<a[i]<<" ";
		}	
		cout<<endl;
	}
	return 0;
}