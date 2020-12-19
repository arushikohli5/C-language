#include<stdio.h>
void main()
{
int a[10][10],r,r1,c1,c,b[10][10],sum[10][10],i,j;
printf("enter the no. rows\n");
scanf("%d",&r);
printf("enter the no. of columns\n");
scanf("%d",&c);
printf("enter array 1");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the no. rows for array 2\n");
scanf("%d",&r1);
printf("enter the no. of columns for array 2\n");
scanf("%d",&c1);
printf("enter array 2:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}
if(r==r1&&c==c1)
{
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum[i][j]=a[i][j]+b[i][j];
}
}
printf("the sum of matrices is\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",sum[i][j]);
}
printf("\n");
}
}
else
printf("not valid input");
}
