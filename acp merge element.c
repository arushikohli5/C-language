#include<stdio.h>
void main()
{
int a[100],b[100],n,m,i,c[100],q=0;
printf("enter the no. of elements in array 1 & 2\n");
scanf("%d %d",&n,&m);
printf("enter array 1\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter array 2\n");
for(i=0;i<n;i++)
{
    scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
    c[i]=a[i];
}
for(i=n;i<m+n;i++)
{
    c[i]=b[q];
    q++;
}
for(i=0;i<n+m;i++)
{
    printf("  %d\t",c[i]);
}
}

