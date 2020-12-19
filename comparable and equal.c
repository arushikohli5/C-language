#include<stdio.h>
void main()
{
int a[10][10],i,j,r,c,r1,c1,a1[10][10],flag=1;
printf("enter the no. of rows\n");
scanf("%d",&r);

printf("enter the no. of columns\n");
scanf("%d",&c);
printf("\nenter elements of array 1");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter the no. of rows of array 2\n");
scanf("%d",&r1);

printf("enter the no. of columns of array 2\n");
scanf("%d",&c1);
printf("\nenter elements of array 1:");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        scanf("%d",&a1[i][j]);
    }
}
if(r==r1&&c==c1)
{

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        if(a[i][j]==a1[i][j])
        {
            flag=1;
        }
        else
            flag=0;
    }
}

if(flag==1)
{
    printf("equal and comparable");
}
else
    printf("comparable but not equal");
}

else
    printf("not comparable");
}
