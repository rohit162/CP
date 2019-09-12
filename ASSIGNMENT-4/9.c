#include<stdio.h>
int main()
{
int m,x=0;
for(x=0;x<100;x++)
{
m=x%10;
    if(m%3==0)
printf("%d\n",x);
}
}
