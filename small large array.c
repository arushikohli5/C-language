#include<stdio.h>
void main()
{
int arr[10],i,n,smallest=0,largest=0,arr1[10],j,k;
printf("enter the total no. of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(k=0;k<n;k++)
{
if(arr[k]<arr[0])
arr[0]=arr[k];

smallest=arr[k];
}
for(j=0;j<n;j++)
{
if(arr[j]>arr[0])
{arr[0]=arr[j];

largest=arr[j];
}}
printf("the smallest no. is %d and the largest no. is %d",smallest,largest);
}
