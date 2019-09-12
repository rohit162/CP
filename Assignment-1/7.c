#include<stdio.h>
int main()
{
int number,m,n,sum;
printf("enter the number");
scanf("%d",&number);
m=number%10;
number=number/10;
n=number%10;
sum=m+n;
printf("the output is %d",sum);
}
