#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,n,x,s,i,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		s=1;
		for(i=0;i<n;i++)
		{
			cin>>x;
			s*=x;
		}
		//cout<<s;
		c=0;
		for(i=1;i<sqrt(s);i++)
			if(s%i==0)
				c+=2;
			if(i*i==s)
				c++;
		cout<<c<<endl;
	}
	return 0;
}