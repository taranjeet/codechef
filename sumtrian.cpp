//dynamic programming
#include "bits/stdc++.h"

using namespace std;
int main()
{
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n][n];
		int temp[n][n];
		for(i=0;i<n;i++)
			for(j=0;j<=i;j++)
				cin>>a[i][j];
		for(j=0;j<n;j++)
			temp[n-1][j]=a[n-1][j];
		for(i=n-2;i>=0;i--)
		{
			for(j=i;j>=0;j--)
				temp[i][j]=max(temp[i+1][j],temp[i+1][j+1])+a[i][j];
		}
		cout<<temp[0][0]<<endl;

	}
	return 0;
}