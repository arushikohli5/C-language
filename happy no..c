#include<stdio.h>
#include<math.h>
void main()
{
int a,rem,num,digits,i,sum,pow;
printf("enter a no.");
scanf("%d",&num);
while(num!=1&&num!=4)
{
    sum=0;
for(i=1;num>0;i++)
{
rem=num%10;
pow=rem*rem;
sum=sum+pow;
num=num/10;
pow=0;
}
num=sum;
}
if(sum=1)
printf("happy no.");
else if(sum=4)
printf("unhappy no.");
else
printf("no");
}
