void partitionArray(int arr[], int n, int x)
{
  int i, j, temp;
  i = 0;
  j = n-1;
  
  
    while (arr[i] <=x)
       i++;
    while (arr[j] > x)
       j--;
    while (i < j)
  {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
	
    while (arr[i] <=x)
       i++;
    while (arr[j] > x)
       j--;
  }  
}
