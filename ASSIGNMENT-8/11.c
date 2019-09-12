#include<stdio.h>
int main()
{
int a,i,m=0,n,b;
printf("enter the terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a);
b=a%10;
if(b%3==0)
m=m+a;
}
printf("the sum of the numbers is %d",m);
}
