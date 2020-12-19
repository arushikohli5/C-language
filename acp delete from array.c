#include<stdio.h>
void main()
{
 int i,a[100],b,pos,n,c[10],d=0;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)

    {
        scanf("%d",&a[i]);
    }
    printf("enter the index\n");
    scanf("%d",&b);
    for(i=b;i<n;i++)
    {
    a[i]=a[i+1];
    }
    printf("the new array is:\n");
    for(i=0;i<n-1;i++)
    {
    printf("%d\t",a[i]);
    }
}
