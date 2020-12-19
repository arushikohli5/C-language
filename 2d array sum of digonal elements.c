
#include<stdio.h>
void main()
{
int a[10][10],i,j,sum=0;
//sum of digonal elements
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<=2;j++)
{
if(i==j)
{
sum=sum+a[i][j];
}
}
}
printf("\nsumm of array %d",sum);
}
