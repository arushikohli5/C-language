#include<stdio.h>
#include<string.h>
void main()
{
    char str[90],a[90];
    int i,j=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>=65&&str[i]<=91)||(str[i]>=97&&str[i]<=122))
        {
            a[j]=str[i];
            j++;

        }
    }
    a[j]='\0';
    printf("%s",a);
}
