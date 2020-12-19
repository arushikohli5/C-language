#include<stdio.h>
main()
{
    int palli=0,num,n;
    printf("enter a number");
    scanf("%d",&num);
    n=num;
    while(num>0)
    {
        palli=palli*10+num%10;
        num=num/10;
    }
    if(n==palli)
        printf("number is pallidrome ");
    else
        printf("not a pallidrome");

}
