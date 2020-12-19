#include<stdio.h>
void main()
{
int a[10][10],i,j,b[10][10];
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{

scanf("%d",&a[i][j]);
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{

b[i][j]=a[j][i];
}
}
printf("\ntranspose matrix\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{

printf("%d\t",b[i][j]);
}
printf("\n");
}
}
