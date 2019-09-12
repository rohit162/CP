#include<stdio.h>
int main()
{
int a,i,m=0,n,b,d,k,y,c,p=a,r;
printf("enter the terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a);
b=a%10;
r=a/10;
c=r%10;
d=p/100;
k=d*10+b;
y=y*10+k;
m=m+y;
}
printf("the sum of the numbers is %d",m);
}
