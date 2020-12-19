#include<stdio.h>
int main()
{
    int x;
    float amount;
    scanf("%d %f",&x,&amount);
    if(x>amount)
    {
        printf("%0.2f",amount);;
    }
    else if(x%5!=0)
    {
        printf("%0.2f",amount);
    }
    else
    {
        amount=amount-0.5-x;
        printf("%0.2f",amount);
    }
}
