#include "bits/stdc++.h"
#define get getchar_unlocked
using namespace std;
int scan_f()
{
	int  n=0,s=1;
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
	int t,flag,i,x,n,m;
	//cin>>t;
	t=scan_f();
	while(t--)
	{
		n=scan_f();
		m=scan_f();
		//cin>>n>>m;
		int a[n+1];
		for(i=1;i<=n;i++)
			a[i]=0;
		for(i=0;i<m;i++)
		{
			x=scan_f();
			//cin>>x;
			a[x]=1;
		}
		flag=1;
		for(i=1;i<=n;i++)
		{
			if(a[i]!=1 && flag)
			{
				cout<<i<<" ";a[i]=1;flag=0;
			}
			if(a[i]!=1 && !flag)
			{
				//cout<<i<<" ";
				flag=1;
			}

		}
		cout<<endl;
		for(i=1;i<=n;i++)
			if(a[i]!=1)
				cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}