#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=6;i++)
{printf("\n");
for(j=1;j<=20;j++)
{
if(i%2!=0)
printf("0");}
if(i%2==0)
{for(j=1;j<=2;j++)
printf("*00*0**00**0");
printf("0");
}
}}
