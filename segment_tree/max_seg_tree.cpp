#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)

vector<int> segment_tree;
void resize(int n){
	int length=2*(int)(pow(2.0,floor(log((double)n)/log(2.0))+1));
	segment_tree.resize(length,0);
}
void initialize(int node,int b,int e,int a[],int n)
{
	if(b==e)
		segment_tree[node]=b;
	else{
		initialize(node*2,b,(b+e)/2,a,n);
		initialize(node*2+1,(b+e)/2+1,e,a,n);
		if(a[segment_tree[node*2]]>=a[segment_tree[node*2+1]])
			segment_tree[node]=segment_tree[node*2];
		else
			segment_tree[node]=segment_tree[node*2+1];
	}
}
int query(int node,int b,int e,int a[],int n,int i,int j){
	if(i>e || j<b)
		return -1;
	if(b>=i && e<=j)
		return segment_tree[node];
	int p1=query(node*2,b,(b+e)/2,a,n,i,j);
	int p2=query(node*2+1,(b+e)/2+1,e,a,n,i,j);
	if(p1==-1)
		return p2;
	if(p2==-1)
		return p1;
	if(a[p1]>=a[p2])
		return p1;
	return p2;
}
int main(){ _
	
int a[]={8,7,3,9,5,1,10};
	resize(7);
	initialize(1,0,7-1,a,7);;
	printf("%d\n",a[query(1,0,7-1,a,7,2,6)]);
	return 0;
}
