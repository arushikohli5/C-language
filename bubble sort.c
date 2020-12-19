#include<stdio.h>
void main()
{
int a[50],n,i,j,temp;
printf("enter the no. of elements of array\n");
scanf("%d",&n);
printf("enter the array\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
}
printf("the sorted array is:\n");
for(i=0;i<n;i++)
{
    printf("%d   ",a[i]);
}
}
