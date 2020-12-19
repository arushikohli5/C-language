#include<stdio.h>
int ascending(int a,int b)
{
if(a<b)
return -1;
else if(a==b)
return 0;
else
return 1;
}
int descending(int a,int b)
{
if(a<b)
return 1;
else if(a==b)
return 0;
else
return -1;
}
int sort(int a[10],int(*compare)(int,int))
{
int i,j,t;
for(i=0;i<10;i++)
{
for(j=i;j<10;j++)
{
if(compare(a[i],a[j])>0)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
}
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {

        scanf("%d",&a[i]);
    }
    sort(a,ascending);
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    sort(a,descending);

 for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
}

