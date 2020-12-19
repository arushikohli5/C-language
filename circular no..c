#include<stdio.h>
void main()
{
int num,last,first;
printf("enter a no.");
scanf("%d",&num);
last=num%10;

while(num>0)
{

if(num/10==0)
first=num;
num=num/10;

}
if(first==last)
{
printf("it is a circular no.");
}

else
{
printf("it is not a circuar no.");
}

}
