#include<stdio.h>
void main()
{
//reverse no. using loop
int rem,num,reverse=0,c=0;
printf("enter a no.");
scanf("%d",&num);
while(num>0)
{
rem=num%10;
reverse=reverse*10+rem;
num=num/10;
c++;
}
printf("the revese of the no. is%d",reverse);
printf("the no. of digits are%d",c);
}
