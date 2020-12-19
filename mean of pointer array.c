#include<stdio.h>
float mean( int *a,int n);
void main()
{
    float ans;
int n,i;
int a[20];
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
ans=mean(a,n);
printf("the mean of array is %.2f",ans);
}
float mean(int *a,int n)
{
int i;
float sum=0,me;
for(i=0;i<n;i++)
{
sum=sum+*(a+i);
}
me=sum/n;
return me;
}
