#include<stdio.h>
void main()
{
int n,i,m,j,q,k,temp,a[50],any,duplicate,count=0;
printf("enter the no. of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=n;j>0;j--)
{
 for(k=0;k<j-1;k++)
 {
if(a[k]>a[k+1])
{
temp=a[k];
a[k]=a[k+1];
a[k+1]=temp;
}
}
}
for(m=0;m<n;m++)
{
    for(q=m+1;q<n;q++)
    {

if(a[m]==a[n])
{
    count++;
}
if(a[m]==a[m-1])
{
    a[m]=0;
    continue;
}
    }
}
for(any=0;any<n;any++)
{
    if(a[any]==0)
    {
        continue;
    }
    else
    {
    printf("\n%d",a[any]);
    }
}
printf("\nno of d %d",count);
}




