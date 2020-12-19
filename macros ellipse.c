#include<stdio.h>
#include<stdarg.h>
int arg(int n,...)
{
va_list valist;
int sum=0,i;
va_start(va_list,n);
for(i=0;i<n;i++)
{
sum +=va_arg(valist,int);
va_end(valist);
return sum/n;
}

}
int main()
{
printf("%d",arg(2,3,4));
printf("%d",arg(3,5,10,15));
}
