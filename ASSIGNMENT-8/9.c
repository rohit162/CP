#include<stdio.h>
int main()
{
int a,i,m=0,n;
printf("enter the terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a);
if(a%2!=0)
m=m+a;
}
printf("the sum of odd numbers %d",m);
}
