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
    int q,n=0,i,len;
    char s[20];
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%s",s);
        int j;
        n=0;

        for(j=0;s[j]!='\0';j++)
        {
            if(s[j]==s[j+1])
            n++;;

        }
            printf("%d\n",n);
    }

}
