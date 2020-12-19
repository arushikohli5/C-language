#include<stdio.h>
void main()
{
/*int a=printf("hi");
printf("%d",a);
*/
//int x=(int)2.99999999999;
//printf("%d",x);
/*int x;
for(x=0;x!=10;x++);
{
    printf("%d",x);
}*/
int l;
float m;
for(l=8;l>=5;l--)
{
m=l/(float)2;
switch(m)
{
case 4:
    printf("4");
    break;
default:
printf("default");
}
}
}
