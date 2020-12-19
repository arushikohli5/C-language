#include<stdio.h>
void print(int *, int *,int);
int main()
{

int arr[100], freq[100];
    int size, i, j, count;

    scanf("%d", &size);

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

        /* Initially initialize frequencies to -1 */
        freq[i] = -1;
    }
print(arr,&count,size);
}
void print(int *a,int*count,int n)
{
    int i,j,k,any,temp,b;
    b=0;
    for(i=n;i>0;i--)
    {
        for(j=0;j<i-1;j++)
        {
            if(*(a+j)>*(a+j+1))
            {
                temp=*(a+j);
            *(a+j)=*(a+j+1);
            *(a+j+1)=temp;
        }
    }
    }
    /*for(any=0;any<n;any++)
    {
        printf("%d\t",*(a+any));
    }*/
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(a+i)==*(a+i-1))
            {
                continue;
            }
            if(*(a+i)==*(a+j))
            {
                b++;
                break;
            }

        }
    }
    printf("count:%d",b);
    }

