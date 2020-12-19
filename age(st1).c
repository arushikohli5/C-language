#include<stdio.h>
void main()
{
int age,total,a=0,b=0,i,c=0;
printf("enter the total no.");
scanf("%d",&total);
for(i=0;i<total;i++)
{
scanf("%d",&age);
if(age>0&&age<=5)
a++;
if(age>=6&&age<=17)
b++;
if(age>=18&&age<=100)
c++;
}
printf("Baby age: %d\n",a);
printf("School age: %d\n",b);
printf("Adult: %d\n",c);

}
