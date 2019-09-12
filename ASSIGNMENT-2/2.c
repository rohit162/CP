#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
float di;
printf("enter the value of a,b,c,d");
scanf("%d%d%d%d",&a,&b,&c,&d);
di=sqrt((c-a)*(c-a)+(d-b)*(d-b));
printf("the distance is %f",di);
}
