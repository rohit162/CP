#include<stdio.h>
int main()
{
int a,i,m=0,n,b;
printf("enter the terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a);

if(a>30 && a<90)
m=m+a;
}
printf("the sum of numbers is %d",m);
}
