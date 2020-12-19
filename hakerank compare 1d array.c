#include<stdio.h>
void main()
{
int a[10],b[10],count=0,flag=0,i,j;
printf("enter array 1");
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
printf("\nenter array 2");
for(i=0;i<3;i++)
{
scanf("%d",&b[i]);
}
for(j=0;j<3;j++)
{
if(a[j]>b[j])
{
count++;
}
else if(b[j]>a[j])
{
flag++;
}
}
printf("\n%d\t%d",count,flag);
}
