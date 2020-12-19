/*#include<stdio.h>
void read(int *a, int n)
{
int i;
printf("enter an array");
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
}
void display(int *a,int n);
{
int i;
printf("\nthe array is:\n");
for(i=0;i<n;i++)
{
printf("%d\t",*(a+i));
}
}
int main()
{
int a[20],num;
printf("enter a num");
scanf("%d",&num);
read(&a,num);
display(&a,num);
}
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
int *a[3];
a=(int *)malloc(sizeof(int)*a);
free(a);
return 0;
}
