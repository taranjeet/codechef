#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,k,a[11],s=0,i,j,m;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<11;i++)
			scanf("%d",&a[i]);
		scanf("%d",&k);
		m=0;
		int c=0;
		for(i=(1<<11)-1;i>=0;i--)
		{
			bitset<64>u;
			u=i;
			if(u.count()==k)
			{
				s=0;
				for(j=0;j<11;j++)
				{
					if(i&(1<<j))
						s+=a[j];
				}
				if(s>m){m=s;c=1;}
				else if(s==m)c++;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}