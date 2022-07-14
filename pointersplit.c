#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);


int main(void){
  int largest = 0;
  int second_largest = 0;
  int array[N] = {1, 2, 35, 4, 5, 6, 7, 8, 9, 10};
  find_two_largest(array, N, &largest, &second_largest);
  printf("largest: %d, second largest: %d\n", largest,second_largest);
  return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest){
  *largest = a[0];
  for (int i = 1; i < n; i++){
    if (a[i] > *largest){
      int temp = *largest;
      *largest = a[i];
      *second_largest = temp;
    }else if ((a[i] < *largest) && (a[i] > *second_largest)){
      *second_largest = a[i];
    }
  }
}
