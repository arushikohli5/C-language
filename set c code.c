#include<stdio.h>
void main()
{
int a,n,b,c=0,d=0,i,div;
scanf("%d %d %d",&a,&b,&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
b=b*2;
else
a=a*2;
}
d=b;
c=a;
if(c>d)
{
div=c/d;
}
else
{
div=d/c;
}
printf("%d",div);

}
