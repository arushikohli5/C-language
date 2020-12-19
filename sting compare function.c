#include<stdio.h>
#include<string.h>
/*int str_cmp(char* ,char*);
int main()
{
    char str1[100],str2[100];
    int n;
    printf("enter the no. of test cases\n");
    scanf("%d",&n);
    printf("enter str1");
    scanf(" %[^\n]s",str1);
    printf("\nenter str2");
    scanf(" %[^\n]s",str2);
    strcmp(str1,str2);
    printf("\nThe result is %d",str_cmp(str1,str2));
}
int str_cmp(char *str1,char *str2)
{
  int z;
 if(strcmp(str1,str2)==0)
 {return 0;}
  else
  {z=strcmp(str1,str2);
  return z;}
}*/

int main()
{
   char str1[20],str2[20];
    printf("enter str1\n");
   scanf(" %[^\n]s",str1);
     printf("enter str2");
   scanf(" %[^\n]s",str2);
   strncat(str1,str2,3);
   printf("%s",str1);

   return 0;
}
