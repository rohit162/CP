#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=4;i++)
{
printf("\n");
for(j=1;j<=4;j++)
{if(i%2!=0)
printf("0****");}
if(i%2==0)
for(j=1;j<=4;j++)
printf("*0000");
}
}
