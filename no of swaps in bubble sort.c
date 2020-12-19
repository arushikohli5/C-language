#include<stdio.h>
void main()
{
    int n,i,count=0,j,a[100],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                count++;
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("%d\n",count);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
