/*#include<stdio.h>
void main()
{
int a[10][10],r,r1,c1,c,b[10][10],sum[10][10],i,j;
printf("enter the no. rows\n");
scanf("%d",&r);
printf("enter the no. of columns\n");
scanf("%d",&c);
printf("enter array 1");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
*/
#include<stdio.h>
int main()
{
    int i,j,a[10][10],n,k,sum=0;
    printf("enter rows and columns");
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
      for(j=0;j<k;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<k;j++)
      {
        printf("%d ",a[i][j]);
       }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            sum=sum+a[i][j];
           // printf("summmmmm %d\n",sum);
        }
        printf("sum of rows %d\n",sum);
        sum=0;
    }
    for(j=0;j<k;j++)
    {
       for(i=0;i<n;i++)
            sum=sum+a[i][j];
       printf("sum of coulmns %d\n",sum);
        sum=0;
    }
}

