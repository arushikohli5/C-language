jkk#include<stdio.h>
void main()
{
int i,j,r,c,a[10][10],sum=0;
printf("enter the no. of rows\n");
scanf("%d",&r);
printf("enter the no. of columns\n");
scanf("%d",&c);
printf("enter the array elements\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
if(r==c)
{
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{


if(i+j==c-1)
{
sum=sum+a[i][j];
}
}
}
printf("sum of minor digonal elements is:%d",sum);
}
else
{
    printf("not a valid input");
}

}
