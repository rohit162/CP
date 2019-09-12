#include<stdio.h>
int main()
{
float a,b,c;
float slope;
printf("enter numbers a,b,c");
scanf("%d%d%d",&a,&b,&c);
slope=-(a/b);
if(b==0)
{printf("the line is vertical");
printf("\nslope is infinite");}
else
{printf("the line is not vertical");
printf("\nslope=%f",slope);}
}
