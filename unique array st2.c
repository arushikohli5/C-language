#include <stdio.h>
#define MAX_SIZE 100
/*void input(int *arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&(*arr));
    }
}*/
int duplicate(int *a,int n)
{
int i,j,temp=0,flag=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i!=j)
{
if(a[i]==a[j])
{
flag=1;
}
}
}
if(flag==1)
{
    temp=a[i-1];
    a[i-1]=a[i];
    a[i]=temp;
}
}
}
int input(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        return arr[i];
    }
}
int main()
{
    int arr[MAX_SIZE];
    int size;
    scanf("%d", &size);
    input(arr,size);
    size=duplicate(arr,size);
     for(int i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}

