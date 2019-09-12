#include<stdio.h>
#include<math.h>
int main()
{
float h,k,r,s,x,y;
printf("enter numbers h,k,r,s");
scanf("%f%f%f%f",&h,&k,&r,&s);
y=sqrt(r*r-(s-h)*(s-h))+k;
float cl=2*y;
printf("%f",cl);
}
