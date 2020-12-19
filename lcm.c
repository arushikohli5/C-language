#include<stdio.h>
void main()
{
int a,b,i,lcm=1,max;
printf("enter any two nos.");
scanf("%d %d",&a,&b);
/*for(i=1;i<=a||i<=b;i++)
{
if(a%i==0||b%i==0)
{
lcm=lcm*i;
printf("LCM of %d and %d is %d",a,b,lcm);
}
}*/
max=(a>b)?a:b;
for(i=1;i<max;i++)
{
    if(max%a==0&&max%b==0)
       {

       printf("The lcm of no. isn%d",max);
        break;
}
    ++max;
}
}
