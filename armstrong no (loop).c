#include<stdio.h>
#include<math.h>
void main()
{
int num,a,rem,r1,r2,i,last,sum;
printf("enter a range");
scanf("%d %d",&r1,&r2);


for(i=r1;i<=r2;i++)
{
    a=log10(i);
    a=a+1;
    sum=0;
    num=i;

    while(num>0)
{
    rem=num%10;
last=pow(rem,a);
sum=sum+last;
num=num/10;
}

if(i==sum)
printf("\n%d is an armstrong no.",i);
}
}
