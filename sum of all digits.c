#include<stdio.h>
void main()
{
int num,i,a,sum=0;
//sum of all digits
printf("enter a no.");
scanf("%d",&num);
while(num!=0)
{
a=num%10;
sum=sum+a;
num=num/10;

}
printf("the sum of digits is %d",sum);
}
