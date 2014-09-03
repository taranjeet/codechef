#include "bits/stdc++.h"
#define get getchar_unlocked
using namespace std;
typedef struct {
	int data;
	char str[6];
}mystr;
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
bool compare(mystr a,mystr b){
	return a.data<b.data;
}
int main()
{	
	int t,n,i;
	t=scan_f();
	//scanf("%d",&t);
	while(t--)
	{
		n=scan_f();
		//scanf("%d",&n);
		vector<mystr> m(n);
		for(i=0;i<n;i++)
		{
			scanf("%s",m[i].str);	
			m[i].data=scan_f();		
		}

		sort(m.begin(),m.end(),compare);
		int flag=0,index=0;
		if(m[0].data!=m[1].data)
			{index=0;flag=1;}

		else
		{
			for(i=1;i<n-1;i++)
		{
			if((m[i].data!=m[i-1].data) && (m[i].data!=m[i+1].data))
				{
					index=i;
					flag=1;
					break;
				}
		}
			if(!flag)
			{
				if(m[n-1].data!=m[n-2].data){index=n-1;flag=1;}
			}	
		}
		
		if(flag)
			cout<<m[index].str<<endl;
		else
			cout<<"Nobody wins."<<endl;
	}
	return 0;
}