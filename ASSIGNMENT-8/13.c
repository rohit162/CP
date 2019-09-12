#include<stdio.h>
#include<math.h>
int main()
{
int a,n,i;
float j=0;
float m=0,x;
printf("enter the terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a);
if(a%2!=0)
{j++;
m=m+a;}}
x=m/j;

printf("the sum of odd average numbers %d",x);
}
