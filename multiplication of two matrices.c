/*#include<stdio.h>
void main()
{
int a[10][10],r,r1,c1,c,b[10][10],sum,i,j,l,m[10][10];
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
printf("enter the no. rows for array 2\n");
scanf("%d",&r1);
printf("enter the no. of columns for array 2\n");
scanf("%d",&c1);
printf("enter array 2:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&b[i][j]);
}
}
if(r1==c)
{
  for(i=0;i<r;i++)
  {
      for(j=0;j<c1;j++)
      {
          for(l=0;l<c;l++)
          {
              sum=sum+a[i][l]*b[l][j];
          }
          m[i][j]=sum;
          sum=0;
      }
  }
  for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d ",m[i][j]);
}
printf("\n");
}
}
else
    printf("Not valid input");
}*/
#include <stdio.h>

int main()
{
  int ro,co,r1,c1,c,d,k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];

  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &ro, &co);
  printf("Enter elements of first matrix\n");

  for (c = 0; c < ro; c++)
    for (d = 0; d < co; d++)
      scanf("%d", &first[c][d]);

  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &r1, &c1);

  if (co!= r1)
    printf("The matrices can't be multiplied with each other.\n");
  else
  {
    printf("Enter elements of second matrix\n");

    for (c = 0; c < r1; c++)
      for (d = 0; d < c1; d++)
        scanf("%d", &second[c][d]);

    for (c = 0; c < ro; c++)
        {
      for (d = 0; d < c1; d++)
       {
        for (k = 0; k < r1; k++)
        {
          sum = sum + first[c][k]*second[k][d];
        }

        multiply[c][d] = sum;
        sum = 0;
      }
    }

    printf("Product of the matrices:\n");

    for (c = 0; c < ro; c++)
    {
      for (d = 0; d < c1; d++)
      {
        printf("%d\t", multiply[c][d]);
      }
      printf("\n");
    }
  }

  return 0;
}
