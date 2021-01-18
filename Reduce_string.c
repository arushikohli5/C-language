void reduceSequence(char *str, char ch)
{
  char a[100];
  int m=0;
  for(int i=0;str[i]!='\0';i++){
    if(str[i]!=str[i+1]&&str[i]==ch){
      a[m]=str[i];
      i++;
      m++;
    }
    if(str[i]!=ch){
      a[m]=str[i];
      m++;
    }
    
    
  }
  for(int i=0;i<m;i++){
    str[i]=a[i];
  }
  str[m]='\0';
}
