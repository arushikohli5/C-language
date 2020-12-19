#include<stdio.h>

void main()
{
int pin,choice;
float amount,left_amount,updated_amount,deposit_amount,balance=15287.00;
printf("*******************************************");
printf("\nWELCOME TO THE ATM");
printf("\nenter your pin");
scanf("%d",&pin);
if(pin==1748)
{
printf("you can continue further");


printf("\n\nyou have the following options:");
printf("\n\t1.check your account balance");
printf("\n\t2.withdrawl amount");
printf("\n\t3.deposit amount");
printf("\n\t4.Exit");

printf("\nenter your choice");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("your account balance is %0.2f",balance);
break;

case 2:
printf("\nenter your withdrawl amount");
scanf("%f",&amount);
if(amount>balance)
{
printf("you do not have enoughh balance");
}
else
{

left_amount=balance-amount;
printf("the updated amount is:%0.2f",left_amount);
}
break;

case 3:
printf("Enter the amount you want to deposit");
scanf("%f",&deposit_amount);


printf("the updated balance is:%0.2f",deposit_amount+balance);
break;

case 4:
printf("exit");
break;

default:
printf("\nSORRY!!!");
printf("please enter a valid choice");
}
}
else
printf("your pin is incorrect");

}














