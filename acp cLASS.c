#include<stdio.h>
int FormNumber();
void main()
{
printf("%d",FormNumber());
}
int FormNumber()
{
int n,i,num,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&num);
sum=sum*10+num;
//printf("\n mid sum=%d",sum);
}
//printf("\n%d\n",sum);
return sum;
}
