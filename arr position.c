#include<stdio.h>
void main()
{
int arr[10],n,i,num=0;
printf("enter the no. of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
printf("\nele at %d pos:=%d",i,arr[i]);
}
int j;
for(j=n-1;j>=0;j++)
{
    num=arr[j]+num*10;
}
printf("%d",num);
}
