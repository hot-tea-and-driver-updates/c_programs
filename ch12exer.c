//This program contains exercises 6, 7, 9, 11, 15, 16 of Chapter 12, Modern C

#include <stdio.h>
#include <stdbool.h>

#define N 10
#define NUM_COLS 24
#define NUM_ROWS 7

int sum_array(const int a[], int n);
bool search(const int a[], int n, int key);
double inner_product(const double *a, const double *b, int n);
int find_largest(const int a[], int n);

int main(void){
  int temperatures[NUM_ROWS][NUM_COLS];
  int a[N] = {1,2,3,4,5,6,7,8,9,10};
  double b[N] = {1,2,3,4,5,6,7,8,9,10};
  double d[N] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  char c = 'N';
  int *x, *y;
  int largest = 0;
  
  printf("sum: %d\n",sum_array(a, N));
  if ((search(a,N,15) == 1)){
      c = 'Y';
    }
  printf("does %d exist in sum_array? %c\n", 15, c);
  printf("total is: %f\n",inner_product(b, d, N));

  //populating 2 dimensional array using pointers but this is rarely useful
  //  for (x = &temperatures[0][0]; x <= &temperatures[7-1][24-1]; x++){
  //    x = 1;
  //  }

  for (int i = 0; i < NUM_ROWS; i++){
    for (int j = 0; j < NUM_COLS; j++){
      temperatures[i][j] = j;
      //      printf("[%d][%d] = %d\n",i,j,j);
    }
  }
  //why do these single array functions work using this single line?
  /* since a[i] is a pointer to row i of the array a, we can pass a[i] to a function that's expecting
     a one-dimensional array as it's argument. */
  for (int i = 0; i < NUM_ROWS; i++){
    printf("0 is false, 1 is true, is %d in array %d? %d\n", 24, i, (search(temperatures[i], NUM_COLS, 12))); 
    largest = find_largest(temperatures[i], NUM_COLS);
  }
  printf("largest value: %d\n", largest);
  return 0;
}

//uses pointer arithmetic instead of array subscripting to return true if a value exist within array
bool search(const int a[], int n, int key){
  int boolval = false;
  for (int *p = a; p < a + n; p++){
    if (*p == key){
      boolval = true;
    }
  }
  return boolval;
}
  
//uses pointer arithmetic instead of array subscripting to return sum
int sum_array(const int a[], int n){
  int sum = 0;
  int *p;
  for (p = a; p < a + n; p++){
    sum += *p;
  }
  return sum;
}

double inner_product(const double *a, const double *b, int n){
  double *p, *q;
  q = b; // *q = &b[0];
  double total = 0;
  for(p = a; p < a + N; p++){
    //    printf("p: %f\n", *p);
    //    printf("q: %f\n", *q);
    double mult = *p * *q;
    total += mult;
    //    printf("current total: %f\n",total);
    q++;
  }
  //  printf("%f\n",b[9]);
  return total;
}
    
int find_largest(const int a[], int n){
  int largest = 0;
  int *p;
  for (p = a; p < a + n; p++){
    if (*p > largest){
      largest = *p;
    }else{
      continue;
    }
  }
  return largest;
}
