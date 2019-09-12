#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a<c||a<b && a>c)
printf("middle number is %d",a);
if(b>a && b<c)
printf("middle number is %d",b);
if(c>b && c<a)
printf("middle number is %d",c);
}
