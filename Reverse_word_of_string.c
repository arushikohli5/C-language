void revWordsString(char *str)
{
  int l = 0, r = 0, inWord = 0;
  while(str[r] != '\0') {
    if((str[r] >= 'a' && str[r] <= 'z') || (str[r] >= 'A' && str[r] <= 'Z')) {
      if(inWord == 0) l = r;
      inWord = 1;
    }
    else {
      if(inWord == 1) {
        int h = r - 1;
        while(l < h) {
          char c = str[l];
          str[l++] = str[h];
          str[h--] = c;
        }
      }
      inWord = 0;
    }
    r++;
  }
  int h = r - 1;
        while(l < h) {
          char c = str[l];
          str[l++] = str[h];
          str[h--] = c;
        }
  printf("%s", str);
}
