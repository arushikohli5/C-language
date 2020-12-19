#include<stdio.h>
int even_odd();
void main()
{
int result=0;
result=even_odd();
if(result==2)
printf("even");
else
printf("odd");
}
int even_odd()
{
int num;
scanf("%d",&num);
if(num%2==0)
return 2;
else
return 1;
}
