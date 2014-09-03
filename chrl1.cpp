#include "bits/stdc++.h"
using namespace std;
int knapsack(int W,int cost[],int weight[],int n)
{
	if(n==0 || W==0)
		return 0;
	if(weight[n-1]>W)
		return knapsack(W,cost,weight,n-1);
	else return max(cost[n-1]+knapsack(W-weight[n-1],cost,weight,n-1),knapsack(W,cost,weight,n-1));
}
int main()
{
	int t,n,k,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		int cost[10],weight[10];
		for(i=0;i<n;i++)
			scanf("%d%d",&cost[i],&weight[i]);
		printf("%d\n",knapsack(k,weight,cost,n));
	}
	return 0;
}