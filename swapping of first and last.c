#include<stdio.h>
#include<math.h>
void main()
{
int num,a,c,e,i,d,h,finally,digits,b=1;
printf("enter a no.");
scanf("%d",&num);
digits=log10(num);
digits=digits+1;
for(i=1;i<digits;i++)
{
b=b*10;
}
e=num%10;//last digit
c=num/b;//first digit
d=e*b;//fist with space
h=num%b;//num execpt first
h=h/10;
h=h*10;
finally=h+c+d;
printf("the no is %d",finally);
}
