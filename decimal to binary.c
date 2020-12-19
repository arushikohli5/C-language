#include<stdio.h>
int bin(num)
{

    if(num==0||num==1)
    {
      return num;
    }
    else
    {
        return(num%2)+(10*bin(num/2));
    }
}
int main()
{
    int num;
    scanf("%d",&num);
   // bin(num);
    printf("%d",bin(num));
}
