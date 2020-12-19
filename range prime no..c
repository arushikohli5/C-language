#include<stdio.h>
void main()
{


int a,b,i,c=0;
printf("enter a range");
scanf("%d %d",&a,&b);
for(i=2;i<b;i++)
{
if(a%i==0)
c++;
a++;
continue;
}
if(i=b)

printf("the number of prime numbers are %d",c);
else
printf("no");
}
