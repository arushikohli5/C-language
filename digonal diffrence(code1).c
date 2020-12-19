#include<stdio.h>
void main()
{
    int i,j,r,a[30][30],sum1=0,sum2=0,diff;
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i==j)
            {
              sum1=sum1+a[i][j];
            }
            if(i+j==r-1)
            {
                printf("arr is%d\n",a[i][j]);
                sum2=sum2+a[i][j];
            }
        }
    }
    printf("%d %d\n",sum1,sum2);
    diff=sum1-sum2;
    if(diff<0)
    {
        printf("%d",-diff);
    }
    else
        printf("%d",diff);
}
