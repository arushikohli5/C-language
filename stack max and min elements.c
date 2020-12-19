#include<stdio.h>
#include<stdlib.h>
#define size 100
int top=-1;
int stack[size];
void push(int num);
int pop();
int main()
{
    int n,num,i,arr_even[100],arr_odd[100],x,m=0,k=0,j,max,min,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        push(num);

    }
    max=stack[top];
    min=stack[top];
for(i=0;i<n;i++)
{
    x=pop();
    printf("before%d\n",x);
    y=x;
    printf("after%d\n",x);
    {
        if(x>max)
        {
            max=x;
            printf("x=%d\n");
        }
        if(y<min)
        {
            min=y;
        }
    }

}
printf("max=%d min=%d\n",max,min);

    }

void push(int num)
{
    if(top==size-1)
    {
        printf("overflow");
        exit(0);
    }
    stack[++top]=num;
}
int pop()
{
    if(top==-1)
    {
        printf("underflow");
        exit(0);
    }
    return stack[top--];
}

