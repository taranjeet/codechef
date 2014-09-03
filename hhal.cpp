#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int x=s.length();
		int ans=1;
		for(int i=0;i<x;i++)if(s[i]!=s[x-i-1]){ans=2;break;}
		cout<<ans<<endl;		

	}
	return 0;
}