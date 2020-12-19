#include<stdio.h>
int count_duplicate(int*, int);
int main()
{
    int a[100],n,i,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    count_duplicate(a,n);
}
int count_duplicate(int *a,int n)
{
int i,j,count=0;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(*(a+i)==*(a+j))
{
count++;
break;
}
}
}
printf("count :%d\n",count);
}
