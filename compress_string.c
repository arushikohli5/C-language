void compressString(char *str)
{
  int r = 0, w = 0;
  while(str[r] != '\0') {
    int c = 1;
    str[w++] = str[r++];
    while(str[r] != '\0' && str[r - 1] == str[r]) {
      r++;
      c++;
    }
    if(c > 1) str[w++] = '0' + c;
  }
  if(w < r) str[w] = '\0';
}
