#include<stdio.h>
#define SIZE 10
int front=-1,rear=-1;
int queue[SIZE];
    void enqueue(int item)
{
    if(rear==SIZE-1)
        printf("queue is full\n");
    else if(front==-1 &&rear==-1)
    {
        front++;
        rear++;
        queue[rear]=item;
        printf("%d enqued to que\n",item);
    }
    else
    {
        rear++;
        queue[rear]=item;
        printf("%d enqued to que\n",item);
    }
}
void dequeue()
{
    if((front==-1&&rear==-1)||(front>rear))
    {
        printf("Queue is empty\n");
    }
    else
    {
        int item=queue[front];
        front++;
        printf("%d dequeued from queue\n",item);
    }
}
int main()
{
    printf("front=%d ,rear=%d\n",front,rear);
    enqueue(10);
    printf("front=%d ,rear=%d\n",front,rear);
    enqueue(20);
    printf("front=%d ,rear=%d\n",front,rear);
    enqueue(30);
    printf("front=%d ,rear=%d\n",front,rear);
    enqueue(40);
    printf("front=%d ,rear=%d\n",front,rear);
    dequeue();
    printf("front=%d ,rear=%d\n",front,rear);
    dequeue();
    printf("front=%d ,rear=%d\n",front,rear);
    dequeue();
    printf("front=%d ,rear=%d\n",front,rear);
    dequeue();
    printf("front=%d ,rear=%d\n",front,rear);
    enqueue(50);
}
