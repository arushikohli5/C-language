#include<stdio.h>
void main()
{
int flag=0,i,num;
printf("enter a no.");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
    flag=1;
}
if(flag==0)
    printf("prime number");
else
printf("composite number");
}
