#include<stdio.h>
int main()
{
int a[4],x,j=0,i;
printf("enter the value of a,b,c,d,x\n");
for(i=0;i<4;i++)
scanf("%d",&a[i]);
scanf("%d",&x);
for(i=1;i<=4;i++)
{
if(a[i]==x)
j=j+1;
}
printf("%d",j);
}
