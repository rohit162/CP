#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
if(a==b)
printf("other number is %d",c);
if(b==c)
printf("other number is %d",a);
if(a==c)
printf("other number is %d",b);
}
