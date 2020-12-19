#include<stdio.h>
void main()
{
int a[100],n,i,count[500],num,num1;
printf("enter the size of array");
scanf("%d",&n);
for(i=0;i<500;i++)
{
    count[i]=0;
}
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    num1=a[i]^a[i+1];
    if(((~num1)&8)==1)
    {
        count[i]=count[i]+1;
    }
}
for(i=0;i<n;i++)
{
    printf("the arr%d\t",count[i]);
}
int max=count[0];
for(i=0;i<n;i++)
{
    if(count[i]>max)
    {
        max=count[i];
    num=i;
    printf("\ndjkfhleshdf%d",i);
}
}
printf("\nthe val off num %d",num);
printf("%d appears odd no of times",a[num]);
}
