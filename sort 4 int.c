#include <stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d%d%d%d",a,b,c,d);
  sort4Integers(a,b,c,d);
}
void sort4Integers(int a, int b, int c, int d)
{
  int t;
  if(a<b)
  {
    t=a;
    a=b;
    b=t;
  }
  if(c<d){
    t=c;c=d;d=t;
  }
  if(a<c){
    t=a;
    a=c;
    c=t;
  }
  if(b<c){
    t=b;b=c;c=t;
  }
  if(c<d){
    t=c;c=d;d=t;
  }
  printf("%d\n%d\n%d\n%d\n",d,c,b,a);
}
