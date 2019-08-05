#include <stdio.h>

// always O(N * log(N))

const int number = 9;
int sorted[number];

void merge(int a[], int m, int middle, int n) {
  int i=m;
  int j = middle + 1;
  int k=m;

  while(i<=middle && j<=n) {
    if (a[i] <= a[j]) {
      sorted[k] = a[i];
      i++;
    }else {
      sorted[k]=a[j];
      j++;
    }
    k++;
  }

  if (i > middle) {
    for (int t = j; t<=n; t++) {
      sorted[k] = a[t];
      k++;
    }
  } else {
    for (int t = i; t<=middle; t++) {
      sorted[k] = a[t];
      k++;
    }
  }

  for (int t=m; t <=n; t++) {
    a[t] = sorted[t];
  }
}

void mergeSort(int a[], int m, int n) {
  if (m < n) {
    int middle = (m + n) /  2;
    mergeSort(a, m, middle);
    mergeSort(a, middle + 1, n);
    merge(a, m, middle, n);
  }
  
}

int main(void) {
  int a[number] = {7,8,2,1,4, 9, 6,5,3};
  mergeSort(a, 0, number -1 );

  for(int i = 0; i<10; i++) {
    printf("%d ", a[i]);
  }


  return 0;
}