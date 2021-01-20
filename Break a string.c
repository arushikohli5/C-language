#include <stdio.h>

char* strtok_code(char *str1, char *ch)
{
  char* str = calloc(50, sizeof(char));
  int i;
  for(i=0;str1[i]!='\0';i++){
    if(str1[i]!=ch[0]){
      str[i]=str1[i];
    }
    else{
      str[i]='\n';
    }
  }
  str[i]='\0';
  return str;
}

int main()
{
  int t,i,j=0;
  char str[50];
  char ch[2];
  scanf("%d", &t);
  while(t--)
  {
    scanf("%s %c",&str,&ch);

    char *result=strtok_code(str,ch);
    printf("%s\n",result);
  }
}
