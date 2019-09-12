#include<stdio.h>
int main()
{
int a,i,m=0,n;
printf("enter the terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a);
m=m+a/10;}
printf("the sum of the last digits is %d",m);
}
