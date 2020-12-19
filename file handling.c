#include<stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp=fopen("a.txt","r");
    do
      {
            ch=getc(fp);
            printf("%c",ch);
        }
while(ch!=EOF);
    fclose(fp);
}
