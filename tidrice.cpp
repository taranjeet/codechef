#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,i,n;
	char x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		map<string,int> m;
		string s;
		for(i=0;i<n;i++)
		{
			cin>>s>>x;
			if(x=='+')
			{
				m[s]=1;
			}
			else if(x=='-')
			{
				m[s]=-1;
			}
		}
		int c=0;
		map<string,int>::iterator it;
		for(it=m.begin();it!=m.end();it++)
		c+=it->second;
		printf("%d\n",c);
	}
	return 0;
}