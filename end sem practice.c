/*#include<stdio.h>
void main()
{
int i,j,a[20][20],r,c,b[20][20],sum[20][20],r1,c1,k,sum1=0;
printf("enter rows and columns");
scanf("%d %d",&r,&c);
printf("\n Enter the array");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n enter the rows and columns of matrix two");
scanf("%d %d",&r1,&c1);
if(c==r1)
{
    printf("\n Enter array 2");
    for(i=0;i<r1;i++)
    {
    for(j=0;j<c1;j++)
    {
    scanf("%d",&b[i][j]);
    }
    }
   // printf("\nthe sum is\n");
    for(i=0;i<r;i++)
    {
    for(j=0;j<c1;j++)
    {
 for(k=0;k<c;k++)
 {
     sum1=sum1+a[i][k]*b[k][j];

 }
 sum[i][j]=sum1;
 sum1=0;
    }
}
printf("\n the final matrix is:\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c1;j++)
    {
        printf("%d ",sum[i][j]);

    }
    printf("\n");
}
}
else
{
    printf("Not a valid input");
}
}*/
#include<stdio.h>
void main()
{
int i,j,a[20][20],r,c,b[20][20],sum[20][20],r1,c1,k,temp=0;
printf("enter rows and columns");
scanf("%d %d",&r,&c);
printf("\n Enter the array");
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
if(i!=j)
{

    if(a[i][j]!=0)
        temp=1;
}
else if(i==j)
{
    if(a[i][j]!=1)
        temp=1;
}
}
}
if(temp==0)
    printf("identity");
else
    printf("not identity");
//printf("the new array is: %d\n",temp);
/*for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
*/
//printf("\n the sum id %d",sum1);
}



