#include "bits/stdc++.h"
using namespace std;
int findminindex(int a[],int start)
{
	int mi=a[start],index=start,i;
	for(i=1;i<10;i++)
	{
		if(a[i]<mi)
		{
			mi=a[i];
			index=i;
		}

	}
	return index;
}
int main()
{
	int t,a[10],i,mi,index,s=0,ans,k;
	cin>>t;
	while(t--)
	{
		for(i=0;i<10;i++)
			cin>>a[i];
		mi=1001;
		s=0;
		for(i=1;i<10;i++)
			if(a[i]<mi)
				mi=a[i],index=i;
		for(k=0;k<=a[index];k++)
			s=s*10+index;
		ans=pow(10,a[0]+1);
		cout<<min(ans,s)<<endl;


	}
	return 0;
}