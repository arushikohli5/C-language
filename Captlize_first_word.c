#include <stdio.h>
int main()
{
    int t   ;
    scanf("%d", &t);
    char str[50];
	
    while(t--){
        scanf(" %[^\n]s",str);
    
  	str[0]=toupper(str[0]);
  	for(int i=0;str[i]!='\0';i++){
      if(str[i]==' '){
        str[i+1]=toupper(str[i+1]);
      }
    }
    printf("%s\n",str);
    }
    return 0;
}
