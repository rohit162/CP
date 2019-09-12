#include<stdio.h>
int main()
{
int a,i,m=0,n;
printf("enter the terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a);
a=a/10;
a=a%10;
m=m+a;
}
printf("the sum of the last digits is %d",m);
}
