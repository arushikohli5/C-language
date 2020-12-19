#include<stdio.h>
void main()
{
int c,num;
printf("enter the no.");
scanf("%d",&num);

c=num%10;
if(num>9)
{
while(num>0)

{
if(num/10==0)
printf("the sum is %d",c+num);

num=num/10;
}
}
else
    printf("the sum of first and last digit is %d",num);
}
