#include<stdio.h>
void main()
{
int a[10][10],i,j,b[10][10],c[10][10];
printf("array 1");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{

scanf("%d",&a[i][j]);
}
}
 printf("\narray 2");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{

scanf("%d",&b[i][j]);
}
}
 printf("\narray 3\n");
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        c[i][j]=b[i][j]+a[i][j];
    }
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
