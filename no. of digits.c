#include<stdio.h>
void main()
{
//counting the no. of digits
int c=0,rem,num,reverse=0;
printf("enter a no.");
scanf("%d",&num);
while(num>0)
{
rem=num%10;
num=num/10;
c++;
}
printf("the no of digits are   %d",c);
}
