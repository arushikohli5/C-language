void reverseString (char str[])
{
  int n=strlen(str)-1,l=n;
  for(int i=0;i<=n/2;i++){
    char temp=str[l];
    str[l]=str[i];
    str[i]=temp;
    l--;
  }
}
