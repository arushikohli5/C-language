#include<stdio.h>
void main()
{
int n,num,i,sum=0,rem,a,b;
//printf("enter the no. of test cases");
scanf("%d",&n);
int s[n];
for(i=0;i<n;i++)
{
printf("enter the no.");
scanf("%d",&num);
sum=0;
while(num)
{
rem=num%10;
sum =sum+rem;
num=num/10;
}
s[i]=sum;
//printf("\nsum=====%d\n",s[i]);
}
for (i=0;i<n;i++)
{
    printf("\n%d",s[i]);
}
}
