#include<stdio.h>
void main()
{
int a[10][10],i,j,r,c,n,k[10][10],a1,temp;
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
            k[i][j]=a[i][j];
            if(i==j)
            {
            temp=a[i][j];
            a[i][j]=a[i][c-1-j];
            a[i][c-1-j]=temp;
            }
        }

    /*for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {

            if(i+j==n-1)
            {
                //k[i][j]=a[i][j];
            a1=j;
        a[i][c-1-a1]=k[i][i];
            }
        }*/
    }

printf("the new array is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
}
