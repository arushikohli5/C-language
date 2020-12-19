/*#include<stdio.h>
void main()
{
//factorial of a no. using for loop
int num,i,fact=1;
printf("enter a no.");
scanf("%d",&num);
for(i=num;i>0;i--)
fact=i*fact;
{
printf("the factorial is %d",fact);
}
}*/

#include<stdio.h>
void main()

{
int num,fact=1,num1,i;
printf("enter a no.");
scanf("%d",&num);
num1=num;
if(num>0)
{
while(num>0)
   {

    fact=fact*num;
num--;
}
printf("the factorial of%d is %d",num1,fact);

}
else
{
    printf("invalid input");
}

}


