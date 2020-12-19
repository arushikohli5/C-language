#include<stdio.h>
int mergesort(int a[],int lb,int ub)
{
int mid;
if(lb<ub)
{
    mid=(ub+lb)/2;
    mergesort(a,lb,mid);
    mergesort(a,mid+1,ub);
    merge(a,lb,mid,ub);
}
}
int merge(int a[],int lb,int mid,int ub)
{
    int i=lb,j=mid+1,k,b[ub],q;
    while(i<=mid&&j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;k++;
        }
        else
        {
          b[k]=a[j];
          j++;k++;
        }

    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;k++;
    }
    while(j<=ub)
    {
        b[k]=a[j];
        j++;k++;
    }
    for(q=0;q<=ub;q++)
    {
        a[q]=b[q];
    }
}
int main()
{
int n,i,a[10],ub,lb;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
lb=0,ub=n-1;
mergesort(a,lb,ub);
printf("the sorted array is: \n");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}
