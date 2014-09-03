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
	int t,n,i,first,d;
	/*cin>>t;*/
	t=scan_f();
	while(t--)
	{
		//cin>>n;
		n=scan_f();
		vector<int>a(n);
		for(i=0;i<n;i++)
			a[i]=scan_f();
			//cin>>a[i];
		first=1000000009;
		sort(a.begin(),a.end());

		for(i=0;i<n-1;i++)
		{
			d=abs(a[i]-a[i+1]);
			if(d<first)
				first=d;

		}
		cout<<first<<endl;
	}
	return 0;

}