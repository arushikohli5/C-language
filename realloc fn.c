#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=(int*)malloc(20*sizeof(int));
    *p=10;
    *(p+1)=20;
    if(p==NULL)
    {
        printf("jnf");
    }
    for(int i=0;i<2;i++)
    {
        printf("%d\n",*(p+i));
    }
    int *p1=(int*)realloc(p,3*sizeof(int));
    *(p1+2)=50;
    for(int i=0;i<3;i++)
    {
        printf("new %d\n",*(p1+i));
    }

}jk
