/* IDENTITY MATRIX
#include<stdio.h>
void main()
{
int i,j,r,c,a[20][20],flag=0;
printf("enter the rows and columns of the array");
scanf("%d %d",&r,&c);
printf("enter the elements in the array");
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
            if(i!=j)
            {
                if(a[i][j]!=0)
                flag=1;
            }
            else if(i==j)
            {
                if(a[j][j]!=1)
                flag=1;
            }
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

    if(flag==0)
    {
        printf("identity matrix");
    }


    else
        printf("not identity matrix");
}
else
    printf("not a valid input");
}*/
/*SUM OF EACH ROW AND COLUMN
#include<stdio.h>
void main()
{
int i,j,r,c,a[20][20],flag=0,sum=0;
printf("enter the rows and columns of the array");
scanf("%d %d",&r,&c);
printf("enter the elements in the array");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
    scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
    sum=0;
    for(j=0;j<c;j++)
    {
        sum=a[i][j]+sum;
    }

    printf("the sum of %d row is %d\n",i,sum);
}
for(j=0;j<c;j++)
{
    sum=0;
    for(i=0;i<r;i++)
    {
        sum=a[i][j]+sum;
    }
    printf("the sum of %d column is %d\n",j,sum);
}
}*/
/*
MULTIPLICATION
#include<stdio.h>
void main()
{
int i,j,r,c,a[10][10],r1,c1,m[10][10],k,sum=0,b[10][10];
printf("enter the rows and columns of the array1");
scanf("%d %d",&r,&c);
printf("enter the elements in the array1");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
    scanf("%d",&a[i][j]);
}
}
printf("enter the order of array 2");
scanf("%d %d",&r1,&c1);
if(c==r1)
{
    printf("enter the array elemnts of array 2");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            for(k=0;k<c;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            m[i][j]=sum;
        }
            sum=0;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }

}
else
    printf("not a valid input");
}*/
/*EXCHANGE OF DIGONAL ELEMENTS
#include<stdio.h>
void main()
{
int i,j,r,c,a[20][20],temp;
printf("enter the rows and columns of the array");
scanf("%d %d",&r,&c);
printf("enter the elements in the array");
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
    if(i==j)
    {
        temp=a[i][j];
        a[i][j]=a[i][r-1-i];
        a[i][r-1-i]=temp;
    }
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
    printf("%d ",a[i][j]);
}
printf("\n");
}
}*/
//EXCHANGE OF ROWS
#include<stdio.h>
void main()
{
int i,j,r,c,a[20][20],temp;
printf("enter the rows and columns of the array");
scanf("%d %d",&r,&c);
printf("enter the elements in the array");
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
    temp=a[i][j];
    a[i][j]=a[i+1][j];
    a[i+1][j]=temp;
}
if(i=r-1)
    break;
}
printf("the new matrix is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
    printf("%d  ",a[i][j]);
}
printf("\n");
}
}



