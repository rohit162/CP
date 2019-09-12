#include<stdio.h>
int main()
{
int m,x=0,c;
for(x=0;x<100;x++)
{
//m=x%10;
c=(x/10)%2;
if(c==0)
{
if(x%2!=0)
printf("%d\n",x);
}
else
{
if(x%2==0)
printf("%d\n",x);
}
}}
