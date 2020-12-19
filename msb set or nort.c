#include<stdio.h>
void main()
{
int x=15,count=0;
int new=x;
while (x)
{
x=x>>1;
count++;
}
printf("%d",count);
if((new>>count-1)&1)
{
printf("it is set");
}
else
printf("not set");
}
