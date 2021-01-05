#include <stdio.h>
int main()
{
  int n,t;
  float i;
  scanf("%d",&t);
  while(t){
  scanf("%d",&n);
  for(i=1;i*i<=n;i++);
  for(--i; i*i < n; i += 0.00001);
  printf("%.2f\n",i);
    t--;
  }
  return 0;
}
