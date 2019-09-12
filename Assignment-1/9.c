#include<stdio.h>
int main()
{
int number,m,n,h;
printf("enter the number");
scanf("%d",&number);
m=number%10;
n=number/100;
h=n*10+m;
printf("the number is %d",h);
}
