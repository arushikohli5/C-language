#include<stdio.h>
int add(int a,int b)
{
return(a+b);
}
int subtract(int a,int b)
{
return(a-b);
}
void print(int a,int b,int(*fp)(int,int))
{
printf("%d\n",(*fp)(a,b));
}
int main()
{
int a=5,b=10;
print(a,b,add);
print(a,b,subtract);
}
