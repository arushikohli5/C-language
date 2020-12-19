#include<stdio.h>
void display(int a,int b)
{
printf("%d",a+b);
}
int main()
{
void (*p)(int,int);

p=&display;
(*p)(20,30);
}
