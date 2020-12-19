#include<stdio.h>
void main()
{
int num,c=0,n,e,d;
printf("enter any no.");
scanf("%d",&num);
printf("enter no. of digits");
scanf("%d",&n);
for(d=0;d<n;d++)
{
    e=num%10;
    c=e+c;
    num=num/10;

}
printf("%d",c);
}
