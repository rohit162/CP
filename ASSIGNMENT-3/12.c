#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,p,q,r;
float l;
printf("enter the value of a,b,c,p,q,r\n");
scanf("%f%f%f%f%f%f",&a,&b,&c,&p,&q,&r);
l=(a*p+b*q+c)/sqrt(a*a+b*b);
if(l==r)
printf("tangent=%f",r);
if(l>r)
printf("no intersection=%f",l);
if(l<r)
printf("chord=%f",l);
}
