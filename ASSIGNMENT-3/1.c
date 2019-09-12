#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("biggest number is %d",a);
if(b>a && b>c)
printf("biggest number is %d",b);
if(c>b && c>a)
printf("biggest number is %d",c);
}
