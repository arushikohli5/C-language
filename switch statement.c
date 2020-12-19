#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,choice;
printf("enter any two nos.");
scanf("%d%d",&a,&b);
printf("\n 1.Addition of two nos.");
printf("\n 2.The no. is even or odd");
printf("\n 3.swapping of two nos.");

printf("\n\t enter your choice");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Addition of %d &%d is%d",a,b,a+b);
break;

case 2:
if(a%2==0)
printf("a is even");
else
printf("a is odd");
if(b%2==0)
printf("&b is even");
else
printf("&b is odd");
break;

case 3:
a=c;
a=b;
b=c;
printf("a=%d&b=%d",a,b);
break;

default:
printf("the choice is not valid");
}
}
