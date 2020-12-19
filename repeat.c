#include<stdio.h>
void main()
{
int i,j,r,col,sum=0,count=0;
printf("enter the no. of columns\n");
scanf("%d",&col);
printf("enter the no. of rows\n");
scanf("%d",&r);
int a[r][col];
for(i=0;i<r;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the entered elements are\n");
for(i=0;i<r;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}

for(i=0;i<r;i++)
{
    for(j=0;j<col;j++)
    {
        if(i==j)
        sum=sum+a[i][j];
    }
}
printf("sum of elsments are %d\n",sum);
for(i=0;i<r;i++)
{
for(j=0;j<col;j++)
{
if(a[i][j]==sum)
count++;
}
}
printf("%d is repeted %d times",sum,count);

/*for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]==a[i+1]a[j]);
count++;
printf("%d is repeted %d times",a[i][j],count);
}
}*/
}
