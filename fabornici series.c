#include<stdio.h>
void main()
{
int num,i,a=-1,b=1,c=0;
printf("enter a no.");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
c=a+b;
a=b;
b=c;
printf("\n%d",c);
}
}
