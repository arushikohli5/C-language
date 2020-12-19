#include<stdio.h>
//int countBits(int);
int main()
{
int num,count=0;
scanf("%d",&num);
//countBits(num);
//printf("ggjhk\n");

  while(num)
  {
   if(num>>1&&1)
   {
     count++;
   }
    num=num>>1;

  }
  printf("the bits are %d",count);
  //printf("%d",count);
  //return count;
  return 0;
}
