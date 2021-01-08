void reverseArray(int *a, int size)
{
  for(int i=0;i<size/2;i++){
    int temp=*(a+i);
    *(a+i)=*(a+size-1-i);
    *(a+size-1-i)=temp;
  }
}
