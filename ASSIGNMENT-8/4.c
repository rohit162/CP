#include<stdio.h>
int main()
{
int a,i,m=0,n,b;
printf("enter the terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a);
b=a%10;
a=a/100;
a=a*10;
m=m+a+b;
}
printf("the sum of the last digits is %d",m);
}
