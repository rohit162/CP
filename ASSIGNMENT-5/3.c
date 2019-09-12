#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=4;i++)
{printf("\n");
if(i%2!=0)
for(j=1;j<=10;j++)
printf("*o");
/*{{
if(j%2==0)
printf("*");
else
printf("o");
}*/
else
{for(j=1;j<=10;j++)
 printf("o*");
/*if(j%2!=0)
printf("*");
else
printf("o");*/
}
}
}
