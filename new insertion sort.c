/*#include<stdio.h>
void main()
{
int i,j,temp,temp0,a[20],n;
printf("enter the no. of elements in an array\n");
scanf("%d",&n);
printf("enter the elements in an array\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
    temp=a[i];
    for(j=i-1;j>=0;j--)
    {
        if(a[j]>temp)
        {
           a[j+1]=a[j];
        }
        a[j]=temp;
    }


}
printf("the sorted array is:\n");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
}*/
#include <math.h>
#include <stdio.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* Driver program to test insertion sort */
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}

