#include<stdio.h>
void print_unique(int *,int);
int main()
{
int a[50],i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
print_unique(a,n);
return 0;
}
void print_unique(int *a,int n)
{
    int i,j,flag=0;
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
            if(*(a+i)==*(a+j))
            {
                flag=1;
            }
        }
        }
        if(flag==0)
        {
            printf("unique%d\t",*(a+i));
        }

    }
}
