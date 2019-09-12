#include<stdio.h>
int main()
{
int m,x=0,c;
for(x=0;x<100;x++)
{
m=x%10;
c=x/10;
if((c+m)%7==0)
printf("%d\n",x);
}
}
