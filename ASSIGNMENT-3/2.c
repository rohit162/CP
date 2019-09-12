#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the value of a,b,c,d\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b && a>c && a>d)
printf("biggest number is %d",a);
if(b>a && b>c && b>d)
printf("biggest number is %d",b);
if(c>b && c>a && c>d)
printf("biggest number is %d",c);
if(d>b && d>a && d>c)
printf("biggest number is %d",d);
}

