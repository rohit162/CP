#include<stdio.h>
int main()
{
int a,b;
printf("enter values of a,b");
scanf("%d%d",&a,&b);
if(a>b)
{int c=a*10+b;
printf("%d",c);}
else
{int c=b*10+a;
printf("%d",c);
}}
