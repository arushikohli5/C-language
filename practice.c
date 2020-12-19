/*#include<stdio.h>
void main()
{
int num,a,c=0,i;
printf("Enter the no.");
scanf("%d",&num);
for(i=0;num>0;i++)
{
num=num/10;
c++;
}
printf("the no. of digits are %d",c);
}

#include <stdio.h>
 Include other headers as needed
int main()
{
int i,a[10],j;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  for(j=9;j>=0;j--)
  {
    printf("%d\n",a[j]);
  }
    Enter your code here. Read input from STDIN. Print output to STDOUT
    return 0;
}
#include <stdio.h>
int cd(int*,int);
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],dups;
    for(int x=0;x<n;scanf("%d",&a[x++]));
    dups=cd(a,n);
    printf("Duplicates=%d\n",dups);
    return 0;
}
int cd(int *b,int n)
{

    int i,j,k,c=0,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(*(b+j)>*(b+j+1))
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    //loop to check if array is sorted correctly:
    for(int x=0;x<n;printf("%d==",*(b+x++)));
   for(k=0;k<n-1;k++)
   {
       if(b[k]==b[k+1])
       {
           c++;
       }
   }
   return c;
}
*/
#include<stdio.h>
void main()
{

    int i,a[100],n;
    int j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    for(j=n-1)
}
