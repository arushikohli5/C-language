#include<stdio.h>
int main()
{
    float x;
    printf("enter magnitude");
    scanf("%f",&x);
    if(x<=2.0)
        printf("micro");
    else if(x>2.1&&x<=3.1)
    printf("very minor");
    else if(x>3.1&&x<=4.1)
        printf("minor");
    else if(x>4.1&&x<=5.1)
        printf("light");
    else if(x>5.1&&x<=6.1)
        printf("moderate");
    else if(x>6.1&&x<=7.1)
        printf("strong");
    else if (x>7.1&&x<=8.1)
        printf("major");
    else if(x>8.1&&x<=10.1)
        printf("great");
    else if (x>10.0)
        printf("meteoric");
    else
        printf("incorrect input");
    return 0;
}
