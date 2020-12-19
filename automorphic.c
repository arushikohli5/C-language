#include<stdio.h>
#include<math.h>
void main()
{
int a,num,i,rev=0,sq,j,new_num=0,rem,rem1;
printf("enter a no.");
scanf("%d",&num);
a=1+log10(num);
sq=(int)ceil(pow(num,2));
for(i=1;i<=a;i++)
{
rem=sq%10;
new_num=new_num*10+rem;
sq=sq/10;
}
for(j=1;j<=a;j++)
{
rem1=new_num%10;
rev=rev*10+rem1;
new_num=new_num/10;
}
printf("%d\n",rev);
if(num==rev)
printf("the no. %d is Automorphic",num);
else
printf("the no. %d is not Automorphic",num);
}
