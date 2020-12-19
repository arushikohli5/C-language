#include<stdio.h>
void main()
{
int a[10][10],i,j,sum=0,sum_c,r,c,temp[20][20];
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
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
    if(i<r-1)
    {
temp[i][j]=a[i][j];
a[i][j]=a[i+1][j];
a[i+1][j]=temp[i][j];
    }
}
//printf("\nthe sum of row %d is %d",i,sum);
/*if(i>0)
{
    j++;
}*/
sum=0;
}
for(j=0;j<c;j++)
{
for(i=0;i<r;i++)
{
sum=sum+a[i][j];
}
printf("\nthe sum of column %d is %d",j,sum);

/*if(j>0)
{
    i++;
}*/
sum=0;
}
printf("\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d  ",a[i][j]);
}
printf("\n");
}
}

