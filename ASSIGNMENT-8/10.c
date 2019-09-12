#include<stdio.h>
int main()
{
int a,i,m=0,n,j=0;
printf("enter the terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a);
if(a%2!=0)
j++;
}
printf("the sum of odd numbers %d",j);
}
