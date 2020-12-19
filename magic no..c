#include<stdio.h>
void main()
{
//magic no.
int num,rem,sum=0,a,reverse=0,rem1,num1,ans;
printf("enter a no.");
scanf("%d",&num);
num1=num;
while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
printf("\nthe sum of the no.%d",sum);
a=sum;
//reversing the no. now
while(a>0)
{
rem1=a%10;
reverse=reverse*10+rem1;
a=a/10;
}
printf("\nthe reverse of the no. is %d",reverse);
ans=reverse*sum;
if(ans==num1)
{
    printf("\n%d is a magic no",num1);
}
else
{
    printf("\nit is not a magic no.");
}
}
