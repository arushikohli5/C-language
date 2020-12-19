#include<stdio.h>
#include<math.h>
int calculate(int a,int n);
void main()
{
int a,n;
printf("enter a and n\n");
scanf("%d %d",&a,&n);
calculate(a,n);
printf("the final ans is: %d\n",calculate(a,n));
}
int calculate(int a,int n)
{
int i,pro,sum=0;
for(i=1;i<=n;i++)
{

pro=pow(a,i);
// printf("i=%d pro=%d\n",i,pro);
sum=sum+pro;
//printf("the sum is %d\n",sum);
}
return sum;
}
