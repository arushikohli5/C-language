#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int i,freq[100000],len,num,count=0,flag=0,j,f[10000];
char n,str[10000];
gets(str);
len=strlen(str);
for(i=0;str[i]!='\0';i++)
{

    n=str[i];
    freq[n]=1;
    for(j=0;j<len;j++)
{
    if(n==str[j])
    {
        freq[n]++;
        count++;
    }
}
printf("%d\n",freq[n]);
f[i]=freq[n];
}
num=len-count;
for(i=0;i<len;i++)
{
    if(f[i]==f[i+1])
    {

        flag=1;
    }
}
if(flag==1)
{
    printf("YES");
}
else
    printf("NO");
}
