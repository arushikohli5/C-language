#include<stdio.h>
void main()
{
int j,i,r1,r2,a,num;
long sum,fact;
printf("enter the range");
scanf("%d %d",&r1,&r2);

for(i=r1;i<=r2;i++)
{
num=i;
sum=0;
while(num>0)
{
    fact=1;
a=num%10;
for(j=1;j<=a;j++)
{
fact=fact*j;
}
sum=sum+fact;
num=num/10;
}
if(sum==i)
{
printf("\n%d this is a strong no.",i );
}
}
}



