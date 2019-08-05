#include <stdio.h>
// Time complexity N * log(N)  , but the worst case N^2 could
int array[10]= { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };


void quickSort(int *data, int start, int end) {
  if (start >= end) { //in case element's count is 1
    return;
  }

  int key = start;
  int i = start + 1 ;
  int j = end;
  int temp;

  while(i <= j) {
    while(data[i]<= data[key]) {
      i++;
    }
    while(data[j]>=data[key] && j > start) {
      j--;
    }
    if (i > j) {
      temp = data[j];
      data[j] = data[key];
      data[key] = temp;
    } else {
      temp = data[i];
      data[i] = data[j];
      data[j] = temp;
    }
  }
  
  quickSort(data, start, j - 1);
  quickSort(data, j + 1, end);

}

int main(void) {

  int i;

  quickSort(array, 0, 9);
  for( i = 0; i<10; i++) {
    printf("%d ", array[i]);
  }




  return 0;
}