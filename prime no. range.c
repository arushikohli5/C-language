#include<stdio.h>
void main()
//prime no.
//except one
{
int c=0,r1,r2,j,num,a,i;
printf("enter a range");
scanf("%d %d",&r1,&r2);
for(j=r1;j<r2;j++)
{
for(i=2;i<j;i++)
{
if(j%i==0)
{
    c++;
break;
}
}
if(i==j)
{
    printf("\nprime number %d",j);
}
}
printf("\n%d",c);
}




