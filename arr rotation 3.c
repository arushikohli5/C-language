#include<stdio.h>
void main()
{
int arr[20],i,j,n;
printf("enter the no. of elemenets");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(j=0;j<n;j++)
{
if(j%2==0)
{
arr[j]=arr[j]*3;
}
else
{
arr[j]=arr[j]-2;
}

printf("New array \n%d",arr[j]);
}
}
