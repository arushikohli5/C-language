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
    printf("enter the position to enter the element\n");
    scanf("%d",&pos);
    printf("enter the element to be added\n");
    scanf("%d",&b);
    for(i=0;i<=n;i++)
    {
        if(i<pos)
        {
            c[i]=a[d];
            d++;
        }
        else if(i==pos)
            c[i]=b;
        else if(i>pos)
        {
            c[i]=a[d];
            d++;

        }
    }

    for(i=0;i<=n;i++)
    {
        printf("%d\t",c[i]);
    }
}
