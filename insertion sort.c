#include<stdio.h>
void main()
{
int i,j,temp,temp0,a[20],n;
printf("enter the no. of elements in an array\n");
scanf("%d",&n);
printf("enter the elements in an array\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
    temp=a[i];
    for(j=i-1;j>=0;j--)
    {
        if(a[j]>temp)
        {
            temp0=a[j];
            a[j]=a[j+1];
            a[j+1]=temp0;
        }
    }


}
printf("the sorted array is:\n");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
}
