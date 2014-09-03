#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		int count[256]={0},c=0;
		for(i=0;i<256;i++)
			count[i]=0;
		char pattern[129];
		scanf("%s",pattern);
		for(i=0;pattern[i];i++)
			count[pattern[i]]=1;
		char mine[129];
		scanf("%s",mine);
		for(i=0;mine[i];i++)
		{
			if(count[mine[i]]==1)c++;
		}
		cout<<c<<endl;
	}
	return 0;
}