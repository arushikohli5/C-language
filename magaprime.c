#include<stdio.h>
void main()
{
int num,i,j,a,rem,flag=1;
printf("enter the no.\n");
scanf("%d",&num);
for(i=2;i<=num;i++)
{
a=i;
if(num%i==0)
{
break;
}
}
if(num==i)
{
while(num)
{
rem=num%10;
for(j=2;j<=rem;j++)
{
if(rem%j==0)
{
break;
}
}
if(j==rem)
    flag=1;
else
    flag=0;
num=num/10;
}

if(flag==1)
{
    printf("megaprime");
}
else
    printf("not!!");
}
else
    printf("not!!");
}

