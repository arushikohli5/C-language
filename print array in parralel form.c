#include<stdio.h>
void main()
{
int a[10][10],i,j,r,c;
printf("enter the no. of rows\n");
scanf("%d",&r);

printf("enter the no. of columns\n");
scanf("%d",&c);
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

}
