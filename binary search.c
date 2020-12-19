#include<stdio.h>
void main()
{
int a[20],temp,i,l,m,u,j,n,search,b;
printf("enter the no. of elements in the array:\n");
scanf("%d",&n);
printf("enter the elements in the array:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the element to search\n");
scanf("%d",&search);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("the sorted array is:\n");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
for(i=0;i<n;i++)
{
    l=0,u=n;
    m=(u+l)/2;
    if(search==a[m])
    {
        printf("%d is found at %d position",search,m);
        break;
    }
    else if(search>a[m])
    {

        u=m;
        m=(u+l)/2;
        continue;
    }
    else if(search<a[m])
    {
        l=m;
        m=(u+l)/2;
        continue;
    }

}
}
