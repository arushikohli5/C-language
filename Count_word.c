int countWords(char str[]) 
{
  int count=0;
  if(str[0]!='\0')
    count=1;
  //int n=str.length;
  for(int i=1;str[i]!='\0';i++){
    if(str[i-1]!=' '&&str[i]==' '){
      count++;
    }
  }
  return count;
}
