#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,n,x,t1,i,ans,s=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;int a[n];
		t1=n*x;
		s=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];s+=a[i];
		}
		if(t1>=s)
			ans=-1;
		else
			ans=s/x;
		cout<<ans<<endl;
	}
	return 0;
}