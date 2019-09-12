#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=10;i++)
{
printf("\n");
if(i%2!=0)
{for(j=1;j<=20;j++)
printf("*");}
if(i==2||i==4)
{for(j=1;j<=20;j++)
 printf("0");}
if(i==6||i==8||i==10)
printf("0000**********000000");
}
}


