#include<stdio.h>
#include<math.h>
main()
{
    int n,a,m,i,c=0,armstrong=0,num,d;
    printf("enter the range of number to find armstrong number ");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        num=i;
         while(num>0)
    {


        a=num%10;
        num=num/10;
        c++;

    }
    num=i;

    while(num>0)
    {
        d=num%10;
        num=num/10;
        armstrong=armstrong+pow(d,c);
    }


    if(armstrong==i)
        printf("%d \n",i);
        c=0;
        armstrong=0;
    }
}
