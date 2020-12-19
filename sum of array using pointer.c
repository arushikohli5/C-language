#include<stdio.h>
int sum_array(int *, int);
int main()
{
int a[100],n ,i,s;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sum(a,n);
}
int sum(int *a,int n)
{
int sum=0,i;
for(i=0;i<n;i++)
{
sum=sum+*a;
a=a+1;
}
printf("%d",sum);
}
