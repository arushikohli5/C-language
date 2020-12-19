#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>
#define MAX 500

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch,s,arr[MAX];
 /*   printf("enter a letter");
    scanf("% c",&ch);
    printf("enter a word");
    scanf("%s",&s);*/
    printf("enter a sentence");
    scanf("%[^\n]s",arr);
    //printf("%c",ch);
    printf("%s",s);

    printf("you entered :%s",arr);
    return 0;
}

