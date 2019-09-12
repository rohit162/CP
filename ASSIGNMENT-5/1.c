#include<stdio.h>
void main()
{
int i,j,a=0;
for(i=1;i<=5;i++)
{ printf("\n");
if(i%2==0)
{for(j=1;j<=20;j++)
if(j%2==0)
printf("%d",a);
else
{printf("*");}}
//printf("\n");}
else
{ for(j=1;j<=20;j++)
printf("*");}
}
}
