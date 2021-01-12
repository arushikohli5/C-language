
void pascalTriangle(int k) 
{
  int *row;
  row = (int*)calloc(1, sizeof(int));
  *row = 1;
  for(int i = 1; i <= k; i++) {
    for(int j = 0; j < i; j++) {
      if(j == i - 1) printf("%d\n", row[j]);
      else printf("%d*", row[j]);
    }
    int *next;
    next = (int*)calloc(i + 1, sizeof(int));
    for(int j = 0; j < i + 1; j++) {
      if(j == 0 || j == i) next[j] = 1;
      else next[j] = row[j] + row[j - 1];
    }
    free(row);
    row = next;
  }
  free(row);
}
