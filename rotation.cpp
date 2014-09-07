//september long 14

include "bits/stdc++.h"
#define get getchar_unlocked
#define h(x) x=scan_f()
using namespace std;
inline int scan_f()
{
int n=0,s=1;
char p=get();
while((p<'0' || p>'9') && p!=EOF && p!='-')
	p=get();
if(p=='-')s=-1,p=get();
while(p>='0' && p<='9')
{
	n=(n<<1)+(n<<3)+p-'0';
	p=get();
}
return (n*s);
}
int main()
{
	int n,m,i,q,shift=0,ans;
	char ch;
	h(n);
	h(m);
	/*scanf("%d%d",&n,&m);*/
	int a[n];
	for(i=0;i<n;i++)
		h(a[i]);
		/*scanf("%d",&a[i]);*/
	/*cout<<m<<endl;*/
	for(int y=0;y<m;y++)
	{
		ch=getchar();
		h(q);
		if(ch=='R')
			{	
				/*printf("y= %d\n",y);*/
				if(shift==0)
				printf("%d\n",a[q-1]);
				else
				{
				if((q-shift-1)<0)
					ans=n+q-shift-1;
				else
					ans=q-shift-1;
				ans%=n;
				printf("%d\n",a[ans]);
				}
			}
		else if(ch=='A')		//anticlockwise
		{
			/*printf("y= %d\n",y);*/
			shift+=q;shift%=n;
		}
		else if(ch=='C')
		{
			/*printf("y= %d\n",y);*/
			shift-=q;
			shift%=n;
		}
			/*cout<<"hello"<<endl;*/
			
	}
	/*for(int z=0;z<m;z++)
	{
		cin>>q;
		cout<<z<<endl;
	}*/
	return 0;
}