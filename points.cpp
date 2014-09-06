#include "bits/stdc++.h"
using namespace std;

typedef struct point
{
int x,y;
}point;
bool compare(point a,point b)
{
	if(a.x==b.x)
		return (a.y>b.y);
	else
		return (a.x<b.x);
}
double distance(int x1,int y1,int x2,int y2)
{
	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}
int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		vector<point>p(n);
		for(i=0;i<n;i++)
			scanf("%d%d",&p[i].x,&p[i].y);
		sort(p.begin(),p.end(),compare);
		double s=0.0;
		for(i=0;i<n-1;i++)
			s+=distance(p[i].x,p[i].y,p[i+1].x,p[i+1].y);
		printf("%.2f\n",s);

	}
	return 0;
}