#include<stdio.h>
main()
{int n,j,k=0,i,arr[50],a,arr1[50],arr2[50],rotation;
printf("enter the no. of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
arr2[i]=arr[i];    //array copy
}
printf("enter roatation no");
scanf("%d",&rotation);
for(j=0;j<2;j++)
{
for(k=0;k<n;k++)
{
arr1[k+1]=arr[k];
}
for(i=0;i<n;i++)
arr[i]=arr1[i]; //changeing value of that is of arr1
}
a=n-rotation;
for(i=0;i<n;i++)
{
    if(i<rotation)
    {
arr1[i]=arr2[a];   //rotating last value in front
a++;
    }
}
for(i=0;i<n;i++)
{
printf("%d\n",arr1[i]);
}
}
