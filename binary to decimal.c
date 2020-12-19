#include<stdio.h>
#include<math.h>
int bin(int n,int p)
{
    if(n==0||n==1)
    {
        return n;
    }
    int rem,sum=0,rev=0,i,num;
    for(i=0;n>0;i++)
    {
        rem=n%10;
        rem=rem*pow(2,p);
        sum=rem+bin(n/10);
    }
    return sum;
}
int main()
{
    int n,ans;
    scanf("%d",&n);
    int count=(int)log10(n)+1;
    ans=bin(n,count);
    printf("%d",ans);
}
