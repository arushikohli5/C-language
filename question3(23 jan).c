#include<stdio.h>
#include<conio.h>
void main()
{
int year;
printf("enter the year");
scanf("%d",&year);

if(year%100==0)
{
if(year%400==0)
printf("this is a leap year");

else
printf("this is not a leap year");
}

else
{
if(year%4==0)
printf("this is a leap year");

else
printf("this is not a leap year");
}
}
