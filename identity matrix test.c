#include<stdio.h>
void main()
{
int a[10][10],i,j,r,c,flag=0;
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
    if(i!=j)
    {
       if(a[i][j]!=0)
       {
           flag=1;
       }
    }
    else if(i==j)
    {
        if(a[i][j]!=1)
            flag=1;
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
if(flag==0)
{
printf("identity matrix");
}
else
    printf("not identity matrix");

}

else
    printf("this is not a square matrix");
}

