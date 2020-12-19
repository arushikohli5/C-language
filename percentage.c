#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,m3,m4,sum;
float percentage;
char grade;

printf("enter the marks of four subjects");
scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
sum=m1+m2+m3+m4;

percentage=((float)sum/400);
percentage=percentage*100;
printf("your percentage is %.2f",percentage);

if(percentage<=40&&percentage>=0);
{
printf("your grade is 'fail'");
}
if(percentage<=50&&percentage>=40);
{
printf("your grade is 'F'");
}
if(percentage<=60&&percentage>=50);
{
printf("your grade is'E'");
}
if(percentage<=70&&percentage>=60);
{
printf("your grade is 'D'");
}
if(percentage<=80&&percentage>=70)
{
printf("your grade is 'C'");
}
if(percentage<=90&&percentage>=80)
{
printf("your grade is 'B'");
}
if(percentage<100&&percentage>=90)
{
printf("your grade is 'A'");
}
getch();

}
