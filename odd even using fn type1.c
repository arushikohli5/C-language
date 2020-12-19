#include<stdio.h>
void even();
void reverse();
void main()
{
even();
reverse();
}
void even()
{
int a;
printf("enter a no.");
scanf("%d",&a);
if(a%2==0)
printf("%d is even no.",a);
else
printf("%d is odd",a);
}
void reverse()
{
int a,rev=0,rem;
printf("\nenter a no.");
scanf("%d",&a);
while(a)
{
rem=a%10;
rev=rev*10+rem;
a=a/10;
}
printf("reverse is %d",rev);
}
