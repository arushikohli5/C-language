void multiReturnArray(int *a, int size, int *min, int *max, int *sum)
{
  *min=*(a+0);
  *max=*(a+0);
  *sum=0;
  for(int i=0;i<size;i++){
    if(*(a+i)>*max){
      *max=*(a+i);
    }
    if(*(a+i)<*min){
      *min=*(a+i);
    }
    *sum=*sum+*(a+i);
  }
}
