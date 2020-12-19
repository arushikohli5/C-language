#include<stdio.h>
#include<math.h>
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
int count;
for(j=n-1;j>=0;j--)
{
    count=0;
    count=ceil((int)log10(arr[j])+1);
    if(arr[j]==0)
        count=1;

printf("\ncount hag%d",count);
    num=arr[j]+num*pow(10,count);
if(count==2&&j!=2)
{

    num=num+1;
}
}
printf("\n%d",num);
}
