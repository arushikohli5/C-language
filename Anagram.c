int isAnagram(char *str1, char* str2)
{
  int flag=1;
  for(int i=0;str1[i]!='\0';i++){
    for(int j=0;str2[j]!='\0';j++){
      if(str1[i]==str2[j]){
        str1[i]='x';
        str2[j]='x';
        break;
      }
    }
  }
      //printf("%s\n",str1);
  for(int i=0;str1[i]!='\0';i++){
    if(str1[i]!='x'){
      flag=0;
      break;
    }
  }
  for(int i=0;str2[i]!='\0';i++){
    if(str2[i]!='x'){
      flag=0;
      break;
    }
  }
  return flag;
}
