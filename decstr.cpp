#include "bits/stdc++.h"
using namespace std;
int main()
{
	string a="zyxwvutsrqponmlkjihgfedcba";
	int t,n,x,i,t1;
	cin>>t;
	while(t--)
	{
		cin>>n;
		t1=n/25;
		
		x=n%25;
		if(t1 && x==0)x--;
		for(i=x;i>=0;i--)
			cout<<a[25-i];
		
		for(i=0;i<t1;i++)
			cout<<a;
		cout<<endl;
	}
	return 0;
}