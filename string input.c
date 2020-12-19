#include<stdio.h>
#include<stdlib.h>
void main()
{
int n=12;
char *ptr=(char*)malloc(n*sizeof(char));
if(ptr==NULL)
printf("memory is not available");
*(ptr+0)='p';
*(ptr+1)='r';
*(ptr+2)='o';
*(ptr+3)='g';
*(ptr+4)='r';
*(ptr+5)='a';
*(ptr+6)='m';
*(ptr+7)='m';
*(ptr+8)='i';
*(ptr+9)='n';
*(ptr+10)='g';
*(ptr+11)='\0';
for(int i=0;i<12;i++)
{
    printf("%c",*(ptr+i));
}
//printf("%s",ptr);

}
