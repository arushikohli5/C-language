#include<stdio.h>
#include<conio.h>
void main()
{
char input;
printf ("enter any char");
scanf("%c",&input);
if((input>='A'&&input<='Z')||(input>='a'&&input<='z'))
{
printf("%c is an alphabet",input);
}
else if(input>='0'&&input>='9')
{
printf("%c is a digit",input);
}
else
{
printf("%c is a special character",input);
}
getch();
}
