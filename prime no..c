#include<stdio.h>
void main()
//prime no.
//except one
{
int num,a,i;
printf("enter a no.");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
{
break;
}
}
if(i==num)
{
    printf("prime number");
}
else
{
    printf("not prime number");
}
}




