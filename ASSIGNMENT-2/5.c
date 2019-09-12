#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,e;
float di;
printf("enter the value of a,b,c,d,e");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e);
di=(a*c+b*d+e)/(sqrt(c*c+d*d));
printf("the distance is %f",di);
}
