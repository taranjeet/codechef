#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		int a[128],c=0;
		for(i=0;i<128;i++)
			a[i]=0;
		string s;
		cin>>s;
		for(i=0;s[i];i++)
			a[s[i]]++;
		for(i=65;i<123;i++)
		{
			if(a[i]>0)
			{
				c+=a[i]/2;
				if(a[i]&1)
					c++;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}