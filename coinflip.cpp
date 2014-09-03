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
	int t,g,n,i,q,tail,head;
	//cin>>t;
	t=scan_f();
	while(t--)
	{
		//cin>>g;
		g=scan_f();
		while(g--)
		{
			i=scan_f();n=scan_f();q=scan_f();
			//cin>>i>>n>>q;
			if(n%2==0)
			{
				head=tail=n/2;
			}
			else
			{
				if(i==1)
				{
					head=n/2;tail=n-head;
				}
				else{
					tail=n/2;
					head=n-tail;
				}
			}
			if(q==1)
				cout<<head<<endl;
			else
				cout<<tail<<endl;
		}
	}
	return 0;

}