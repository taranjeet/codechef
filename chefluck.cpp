#include "bits/stdc++.h"
using namespace std;
#define get getchar_unlocked
#define u(x) x=scan_f()
int scan_f()
{
	int n=0,s=1;
	char p=get();
	if(p=='-')
		s=-1;
	while((p<'0' || p>'9') && p!=EOF && p!='-')
		p=get();
	if(p=='-')
		s=-1,p=get();
	while(p>='0' && p<='9')
	{
		n=(n<<3)+(n<<1)+p-'0';
		p=get();
	}
	return (n*s);
}
int main()
{
	int t,n,x,y,ans=-1;
	u(t);
	/*scanf("%d",&t);*/
	while(t--)
	{
		ans=-1;
		u(n);
		/*scanf("%d",&n);*/
		x=n/7;y=n%7;
		if(n==4 || n==8 || n==12)
			ans=0;
		else if(n==7 || n==11)
			ans=7;
		else if(n==17)ans=-1;
		else if(n>13)
		{
			if(y==0)ans=n;
			else if(y==1)ans=(x-1)*7;
			else if(y==2)ans=(x-2)*7;
			else if(y==3)ans=(x-3)*7;
			else if(y==4)ans=x*7;
			else if(y==5)ans=(x-1)*7;
			else if(y==6)ans=(x-2)*7;
		}
		cout<<ans<<endl;
	}
	return 0;
}