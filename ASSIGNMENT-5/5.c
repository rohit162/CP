#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=5;i++)
{
printf("\n");
for(j=1;j<=20;j++)
{if(i%2!=0)
printf("*");}
if(i%2==0)
for(j=1;j<=4;j++)
printf("*0000");
}
}

