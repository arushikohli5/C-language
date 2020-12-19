#include<stdio.h>
void main()
{
int i,j,k,n,arr[50],small=0,large=0,first,second;
printf("enter the total elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(j=1;j<n;j++)
{
if(arr[j]<arr[0])
{
if(j==n-1)
{
    break;
}
small=arr[0];
arr[0]=arr[j];

}
}
printf("small%d",small);

for(k=1;k<n;k++)
{
    if (arr[k]>first);
   {


        if(k==n-1)
    {
        break;
    }

    large=arr[0];
    arr[0]=arr[k];
    }
}
    printf("\nlarge%d",large);
}


