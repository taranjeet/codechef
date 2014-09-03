#include "bits/stdc++.h"
using namespace std;
int main()
{

	int t,flag=0,c=0,i,t1;
	cin>>t1;
	while(t1--)
	{
		string s;
		flag=0;
		cin>>s;
		int len =  s.length();
		if(len&1)
			flag=1;
		int a[26];
		for(i=0;i<26;i++)
			a[i]=0;
		t=len/2;
		for(i=0;i<t;i++)
			a[s[i]-'a']++;
		if(flag)
			t++;
		for(i=t;i<len;i++)
			a[s[i]-'a']--;
		c=0;
		for(i=0;i<26;i++){
			if(a[i]!=0)
			{
				c=1;break;
			}
		}
		if(c)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}