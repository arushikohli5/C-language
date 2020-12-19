#include<stdio.h>
void swap(int *a, int *b);
int main()
{
	int m = 22, n = 44;
	swap(&m, &n);		// calling swap function by reference
	printf("Values after swap  m = %d\tand n = %d\n", m, n);
}
void swap(int *a, int *b)
{
	int tmp;
	printf("\n\n \n\n\t%d\n\n\n\t\n",*a);
	tmp = *a;		*a = *b;			*b = tmp;
	printf("In swap() function:\n");
	printf("values after swap *a = %d\t and *b = %d\n", *a, *b);
}
