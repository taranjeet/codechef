#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,i,x;
	char pat[26];
	scanf("%d%s",&t,pat);
	while(t--)
	{
		char s[101];
		scanf("%s",s);
		for(i=0;s[i];i++)
		{
			if(s[i]=='_')
				printf(" ");
			else if(s[i]>=65 && s[i]<=90)
			{
				x=s[i]-65;
				printf("%c",pat[x]-32);
			}
			else if(s[i]>=97 && s[i]<=122)
			{
				x=s[i]-97;printf("%c",pat[x]);
			}
			else
				printf("%c",s[i]);
		}
		printf("\n");
	}


	return 0;
}