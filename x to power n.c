#include<stdio.h>
void main()
{
int n,x,result=1,i;
printf("enter the no. and the power");
scanf("%d %d",&x,&n);
for(i=0;i<n;i++)
{

    result=result*x;
}
printf("%d",result);
}

