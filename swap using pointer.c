#include<stdio.h>
void swap(int,int);
void main()
{
//swap using pointers
int a,b,*P,*Q;
scanf("%d %d",&a,&b);
P=&a;
Q=&b;
swap(P,Q);
}
void swap(int*A, int *B)
{
int C;
C=*A;
*A=*B;
*B=*C;
}
