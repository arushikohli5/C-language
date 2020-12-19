#include<stdio.h>
void main()
{
int a[50],n,k,j,i,q,m,temp,count=0,any;
printf("enter a no.");
scanf("%d",&n);
printf("\nenter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=n;j>0;j--)
{
for(q=0;q<j-1;q++)
{
if(a[q]>a[q+1])
{
temp=a[q];
a[q]=a[q+1];
a[q+1]=temp;
}
}
}
for(any=0;any<n;any++)
{
    printf("\narray%d\n",a[any]);
}

for(m=0;m<n;m++)
{
    count=0;
    for(k=0;k<n;k++)
    {
        if(a[m]==a[k])
        {
            count++;
        }
    }
    if(a[m]==a[m-1])
    {
        continue;
    }
if(count>1)
    printf("the element %d is repeted %d times\n",a[m],count);
}
}

