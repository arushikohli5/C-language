#include<math.h>
#include<stdio.h>
int logic(int*);
void main()
{
    int num,*A;
scanf("%d",&num);
logic(&num);
}
int logic(int *A)
{
int i,a,sumodd=0,sumeven=0,digits;
digits=1+log10(*A);
for(i=0;i<digits;i++)
{
a=*A%10;
if(i%2==0)
{
sumeven=sumeven+a;
}
else if(i%2!=0)
{
sumodd=sumodd+a;
}
*A=*A/10;
}
if(sumodd==sumeven)
{
printf("EQUAL");
}
else
{
    printf("not equal");
}
return 0;
}


