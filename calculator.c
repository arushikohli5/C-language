#include<stdio.h>
#include<conio.h>
void main()
{
float a,b;
printf("enter two nos.");
scanf("%f%f",&a,&b);
char d;

printf("\n (+)Sum of two nos.");
printf("\n(-)Subtraction of two nos,.");
printf("\n(*)multiplication of two nos.");
printf("\n(/)division of two nos.");
printf("\n\t enter your choice");
scanf(" %c",&d);
switch(d)
{
case '+':
printf("the sum of two nos is%.2f+%.2=%.2f",a,b,a+b);
break;
case '-':
printf("%.2f-%.2f=%.2f",a,b,a-b);
break;

case '*':
printf("%.2f*%.2f=%.2f",a,b,a*b);
break;

case '/':
printf("%.2f/%.2f=%.2f",a,b,a/b);
break;

default:
printf("your choice is not valid");
}

}
