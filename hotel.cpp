#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,n,i,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int start[n],end[n];
		for(i=0;i<n;i++)
			cin>>start[i];
		for(i=0;i<n;i++)
			cin>>end[i];
		c=0;
		for(i=0;i<n-1;i++)
		{
			if(end[i]>start[i+1])
				c++;
		}
		cout<<c<<endl;
	}
	return 0;
}