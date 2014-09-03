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
	int t,n,i,x,k,ans=0,mi,j;
	//cin>>t;
	t=scan_f();
	while(t--)
	{
		n=scan_f();
		k=scan_f();
		//cin>>n>>k;
		vector<int>a(n);
		for(i=0;i<n;i++)
			a[i]=scan_f();
			//cin>>a[i];
		ans=0;
		mi=2000000000;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(abs(a[i]+a[j]-k)<mi)
				{
					mi=abs(a[i]+a[j]-k);
					ans=1;
				}
				else if(abs(a[i]+a[j]-k)==mi)
					ans++;
			}
		}
		cout<<mi<<" "<<ans<<endl;
		
	}
	return 0;
}