#include<stdio.h>
#include<math.h>
void main()
{
int num,rem,a,sum=0;
printf("enter a no.");
scanf("%d",&num);
a=num%10;
while(num)
{
rem=num%10;
num=num/10;
if(num==0)
{
sum=rem+a;
}
}
if(sum>=5)
printf("Gud no.");
else
printf("Bad no.");
}
