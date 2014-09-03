#include "bits/stdc++.h"
#define get getchar_unlocked
using namespace std;

inline int scan_f()
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
	int t,n,c,x,i,s;
	t=scan_f();
	//cin>>t;
	while(t--)
	{
		n=scan_f();c=scan_f();
		//cin>>n>>c;
		s=0;
		for(i=0;i<n;i++)
		{
			//x=scan_f();
			//cin>>a[i];
			s+=scan_f();
		}
		
		if(c>=s)
			puts("Yes");
		else
			puts("No");
	}
	return 0;
}