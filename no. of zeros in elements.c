#include<stdio.h>
void main()
{
int a[10][10],i,j,r,c,count=0,b=0;
printf("enter the no. of rows\n");
scanf("%d",&r);

printf("enter the no. of columns\n");
scanf("%d",&c);
printf("\nenter elements of array 1:");
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
        if(a[i][j]==0)
        {
            count++;
        }
        else
        {
            b++;
        }
    }
}
if(count>b)
{
    printf("the given matix is spares");
}
else if(count==b)
    printf("no. of zeros and non-zeros are equal");
else
    printf("the given matrix is not sparse");
}
