#!/usr/bin/python
import sys

if sys.argv[1]:
	name=sys.argv[1]
else:
	name='trial'
filename=name+'.cpp'
f1=open(filename,'w')
string='''#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef vector < long long > vll;
typedef pair < long long, long long > pll;

#define rep(i,n) for(int i = 0; i < n; i++)
#define reps(i,a,n) for(int i = a; i < n; i++)
#define get(n) cin >> n

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	
	}

	return 0;
}
'''
f1.write(string)
f1.close()



#sudo cp mycopy.py /usr/local/bin
#sudo chmod 755  mycopy.py
