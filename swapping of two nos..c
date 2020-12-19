#include<stdio.h>
int swap(int *a,int *b);
void main()
{
    int m,n;
    printf("enter a no.");
    scanf("%d %d",&m,&n);
    swap(&m,&n);
}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\n after swap m=%d & n=%d",*a,*b);
    return 0;
}
