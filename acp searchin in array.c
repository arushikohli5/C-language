#include<stdio.h>
int search(int n,int a[],int b);
void main()
{
int n,a[100],i,s,b;
printf("enter the no. of elments\n");
scanf("%d",&n);
printf("enter the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the value to be searched\n");
scanf("%d",&b);
s=search(n,a,b);
if(s>=0)
    printf("%d found at index %d",b,s);
else
    printf("not found");
}
int search(int n,int a[],int b)
{
   // printf("ahgabdsbf");
int i,flag=0;

for(i=0;i<n;i++)
{
 if(a[i]==b)
 {
        flag=1;
        break;
 }
 else
    flag=0;
}
if(flag==1)
    return i;
else
    return -1;
}
