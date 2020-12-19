#include<stdio.h>
void main()
{
int i=0,num;
printf("enter a no.");
scanf("%d",&num);
if(num>0)

{
    for(i=0;num>0;i++)
        num=num/10;
printf("the no. of digits are %d",i);
}
 else
     {

        printf("the no of digit is 1");
     }
}
