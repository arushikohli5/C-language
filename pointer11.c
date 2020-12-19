#include<stdio.h>
void main()
{
    int a,i,k,num,b=2;
  printf("enter a no.");
  scanf("%d",&a);
  num=a;
  for(i=2;i<a;i++)
  {
      if(num%b==0)
      {
          num=num/b;

          for(k=2;k<=i;k++)
          {
              if(b%k==0)
                break;
          }
          if(k==b)
            printf("%d\n",b);

      }
      else
        b++;
  }
}
