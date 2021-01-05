#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n;
  scanf("%d",&n);
  int j;
  for(int i=1;i<=n;i++){
    
      for(j=1;j<=i;j++){
        printf("%d",j);
      }
      for(j=i-1;j>=1;j--){
        printf("%d",j);
    }
    printf("\n");
  }
    return 0;
}
