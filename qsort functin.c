#include<stdio.h>
#include<stdlib.h>
int ascending(const void *a,const void *b)
{
    int first=*(int *)a;
    int second=*(int *)b;
    if(first<second)
        return -1;
    else if(first==second)
    {
        return 0;
    }
    else
    return 1;
}
int descending(const void *a,const void *b)
{
      int first=*(int *)a;
    int second=*(int *)b;
    if(first<second)
        return 1;
    else if(first==second)
    {
        return 0;
    }
    else
    return -1;
}
int main()
{
int a[10],i;
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
qsort(a,10,sizeof(int),ascending);
for(i=0;i<10;i++)
{
    printf("%d",a[i]);
}
qsort(a,10,sizeof(int),descending);
}


