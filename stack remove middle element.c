#include<stdio.h>
#include<stdlib.h>
#define size 100
int top=-1;
int stack[size];
void push(int num);
int pop();
int main()
{
    int n,num,i,arr_even[100],arr_odd[100],x,m=0,k=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        push(num);
        printf("top=%d\n",top);
        if(i==n/2)
        {
          x=pop();
        }
    }

        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
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

