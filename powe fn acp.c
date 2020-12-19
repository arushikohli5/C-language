#include<stdio.h>
float calculate(int a,int b)
{
float p=1;int i;
if(b>0)
{
for(i=1;i<=b;i++)
{
p=p*a;
}
return p;
}
else
{
    for(i=1;i>=b;i--)
    {
        p/=a;
    }
    return p;
}
}

int main()
{
int a,b;
scanf("%d %d",&a,&b);
printf("%.2f",calculate(a,b));
}
