#include<stdio.h>
void main()
{
int n,a[20],i,j,min,temp;
printf("enter the no of elements\n");
scanf("%d",&n);
printf("enter the array\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
min=i;
    for(j=i+1;j<n;j++)
    {
       if(a[j]<a[min])
       {
            min=j;
       }
    }
       temp=a[i];
       a[i]=a[min];
       a[min]=temp;
}


printf("the sorted array is:\n");


for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
}
