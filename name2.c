#include<stdio.h>
#include<string.h>
int check(char *a,char *b){
int x=strlen(a),y=strlen(b);
int i,j=0;
for(i=0;i<x;i++){
while(j<y){
if(a[i]==b[j])break;
j++;
}
if(j>y)
return 0;
j++;
}
return 1;
}
int main(){
int t;
scanf("%d",&t);
while(t--){
char a[25001],b[25001];
scanf("%s%s",a,b);
int x=strlen(a),y=strlen(b),flag=0;
if(x==y && x==1){
if(a[0]==b[0])flag=1;
else flag=0;
}
else if(y>=x)
flag=check(a,b);
else
flag=check(b,a);
if(flag)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}
