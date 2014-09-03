#include "bits/stdc++.h"
#define get getchar_unlocked
using namespace std;
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
	int t,n,i;
	t=scan_f();
	//cin>>t;
	while(t--)
	{
		//cin>>n;
		n=scan_f();
		int c=1,maxspeed,y;
		maxspeed=scan_f();
		//cin>>maxspeed;
		for(i=1;i<n;i++)
		{
			//cin>>y;
			y=scan_f();
			if(y<=maxspeed)
				{c++;
					maxspeed=y;}
			
			
		}
		cout<<c<<endl;
	}
	return 0;
}