#include<stdio.h>
void main()
{
int n,i,actual_high,actual_low,normal_high,normal_low;
float avg;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d%d%d%d",&actual_high,&actual_low,&normal_high,&normal_low);
avg=(float)((actual_high-normal_high)+(actual_low-normal_low))/2;
   if(avg<0)
   {
    avg=avg*-1;
    printf("%0.1f DEGREE(S) BELOW NORMAL",avg);
    }
    else
    {
      printf("0.1%f DEGREE(S) ABOVE NORMAL",avg);

    }

}
}
