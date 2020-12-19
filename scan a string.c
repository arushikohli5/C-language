#include<stdio.h>
void main()
{
    char str1[2],str2[100];
    scanf(" %[^\n]",str1);
    printf("%s",str1);
    //add a spacebar after "
    scanf(" %[^\n]",str2);
    printf("%s",str2);
}
