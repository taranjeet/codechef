#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,i,d;
	scanf("%d",&t);
	while(t--)
	{
		char a[1001];
		scanf("%s",a);
		int c=2,x=strlen(a);
		for(i=1;a[i];i++)
			{ 
				if(a[i]-a[i-1]>=0)d=a[i]-a[i-1];
				else d=26-abs(a[i]-a[i-1]);
				c+=d+1;
		/*cout<<i<<" "<<c<<endl;}*/

}		if(c<=11*x)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}