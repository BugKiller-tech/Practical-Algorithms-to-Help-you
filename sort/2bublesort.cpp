#include <stdio.h>

// 1,2 2,3 3,4 4,5 5,6 6,7 7,8, 8,9  9,10
// 1,2 2,3 3,4 4,5 5,6 6,7 7,8, 8,9
// 1,2 2,3 3,4 4,5 5,6 6,7 7,8
// etc...

int main(void) {
  int array[10]= { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
  int i, j, temp;

  for (i=0; i<10; i++) {
    for (j=0; j<9-i; j++) {
      if (array[j] > array[j+1]) {
        temp = array[j];
        array[j] = array[j+1];
        array[j+1]=temp;
      }
    }
  }
  for(i=0; i<10; i++) {
    printf("%d ", array[i]);
  }




  return 0;
}