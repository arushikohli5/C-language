#include<stdio.h>
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
        x=pop();
        {
            if(x%2==0)
            {
                arr_even[m]=x;
                m++;
            }
            else
            {
                arr_odd[k]=x;
                //printf("odd %d\n",arr_odd[k]);
                k++;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        printf("even no. %d\n",arr_even[i]);
    }
   // printf("k %d\n",k);
     for(j=0;j<k;j++)
    {
        printf("odd no. %d\n",arr_odd[j]);
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
