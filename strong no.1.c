#include<stdio.h>
void main()
{
int i,a,num,num1,fact=1,sum=0;
printf("enter a no.");
scanf("%d",&num);
num1=num;
while(num>0)
{
a=num%10;
for(i=a;i>0;i--)
fact=i*fact;
num=num/10;
sum=sum+fact;
fact=1;
}
if(sum==num1)
{
printf("this is a strong no.");
}
else
{
printf("it is not a strong no.");
}
}
