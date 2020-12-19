#include<stdio.h>
int quicksort(int a[],int lb,int ub);
int partion(int a[], int lb,int ub);
void main()
{
    int a[50],lb,ub,i,n,j;
    printf("no. of elements in an array\n");
    scanf("%d",&n);
    lb=0;ub=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   quicksort(a,lb,ub);
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
}
int quicksort(int a[],int lb,int ub)
{

    int pivot;
    if(lb<ub)
    {
        pivot=partion(a,lb,ub);
        quicksort(a,lb,pivot-1);
        quicksort(a,pivot+1,ub);
    }
}
int partion(int a[],int lb,int ub)
{

    int pivot,i,j,temp,tem;
    pivot=a[ub];
    i=lb-1;
    for(j=lb;j<=ub-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            tem=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    tem=a[i+1];
    a[i+1]=a[ub];
    a[ub]=tem;
    return i++;
}
