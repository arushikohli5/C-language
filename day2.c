#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum,a,b;
printf("enter any value n");
scanf("%d",&n);
a=n%10;
n=n/10;
b=n%10;
n=n/10;
sum=a+b+n;
printf("the sum is%d",sum);
getch();
}
