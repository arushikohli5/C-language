#include<stdio.h>
void main()
{
/*int n,j,k=0,i,arr[50],a,arr1[50];
printf("enter the no. of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(j=0;j<2;j++)
{
for(;k<n;k++)
{
arr1[k+1]=arr[k];
}
k++;
}
for(a=0;a<n;a++)
{
printf("\n%d",arr1[a]);
}
}*/
int arr[50],c,shifts,n,i,b[50],j,d=0;
printf("no. of elements");
scanf(" %d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("no. of shifts");
scanf("%d",&shifts);
c=n-shifts;
for(j=0;j<n;j++)
{
    if(j<shifts)
    {
        b[j]=arr[c];
        c++;
    }
    else
    {
        b[j]=arr[d];
        d++;
    }
}

for(i=0;i<n;i++)
{
    printf("\n%d",b[i]);
}
}
