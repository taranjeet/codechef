#include "bits/stdc++.h"
using namespace std;
int xxor(int n,int k,int a[],int ia)
{
	int i,j,ans=ia;
	if(k==0)return ia;
	if(k&1)
		k=1;
	else
		k=2;
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=n;j++)
			ans=ans ^ a[j];
	}
	return ans;
}
int aand(int n,int k,int a[],int ia)
{
	int i,j,ans=ia;
	if(k==0)return ia;
	if(k&1)
		k=1;
	else
		k=2;
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=n;j++)
			ans=ans & a[j];
	}
	return ans;
}
int oor(int n,int k,int a[],int ia)
{
	int i,j,ans=ia;
	if(k==0)return ia;
	else k=1;
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=n;j++)
			ans=ans | a[j];
	}
	return ans;
}
int main()
{
	int t,n,k,ia,ans,i;
	cin>>t;
	while(t--){
		cin>>n>>k>>ia;
		int a[n+1];
		for(i=1;i<=n;i++)
			cin>>a[i];
		string s;
		cin>>s;
		if(s=="XOR")	
			ans=xxor(n,k,a,ia);
		else if(s=="AND")
			ans=aand(n,k,a,ia);
		else if(s=="OR")
			ans=oor(n,k,a,ia);
		cout<<ans<<endl;
	}
	return 0;
}