#include "bits/stdc++.h"
using namespace std;
int main()
{
	int n,k,i,j;
	char lucky[50][51];
	scanf("%d%d",&k,&n);
	for(i=0;i<k;i++)
		scanf("%s",lucky[i]);
	char str[50][51];
	for(i=0;i<n;i++)
	{
		int flag=0;
		scanf("%s",str[i]);
		if(strlen(str[i])>=47)flag=1;
		else
		{
			for(j=0;j<k;j++)
		{
			if(strstr(str[i],lucky[j])!=NULL){flag=1;break;}
		}
		}
		if(flag)
			puts("Good");
		else
			puts("Bad");
		
	}
		
	return 0;
}