#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f,g,h,amount;
printf("enter the amount");
scanf("%d",&amount);
a=amount/500;
printf("\nnotes of 500 are:%d",a);
amount=amount-a*500;
b=amount/100;
printf("\nthe no. of notes of 100 are:%d",b);
amount-=b*100;
c=amount/50;
printf("\nthe no. of notes of 50 are:%d",c);
amount-=c*50;
d=amount/10;
printf("\nthe no. of notes of 10 are%d",d);
amount=amount-d*10;
e=amount/5;
printf("\nthe no. of coins of 5 are:%d",e);
amount=amount-e*5;
f=amount/2;
printf("\n the no. of coins of 2 are:%d",f);
amount=amount-f*2;
g=amount/1;
printf("\nthe no. of coins of 1 are:%d",g);

}
