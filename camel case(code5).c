#include<stdio.h>
void main()
{
    char str[10000];
    int i,count=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<91)
        {
            count++;
        }
    }
    printf("%d",count+1);
}
