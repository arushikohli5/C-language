#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter three side of a triangle");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c)
printf("\t\nthe triangle is an equilateral triangle");

else if(a==b||b==c||a==c)
printf("the triangle is an isosceles triangle");

else
printf("the triangle is a scalene triangle");


}
