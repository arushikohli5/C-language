#include<stdio.h>
void main()
{
    int r,c,r1,c1,k,i,j,m[90][90],a[90][90],b[90][90],sum=0;
    printf("enter the row and column for1\n");
    scanf("%d %d",&r,&c);

    printf("enter array 1\n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
           scanf("%d",&a[i][j]);
       }
    }
printf("enter the row and column for2\n");
    scanf("%d %d",&r1,&c1);
    if(c!=r1)
    {
        printf("multiplication is not possible");
    }
    else
    {
        printf("enter array 2\n");
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
            for(k=0;k<r1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            m[i][j]=sum;
            sum=0;
        }
    }
    printf("the new matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    }


}
