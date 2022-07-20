#include <stdio.h>

#define N 10

// the name of an array can be used as a pointer to the first element in the array
int main(void){
  int a[N], sum, *p;
  sum = 0;
  *a = 7; //stores 7 in a[0]
  *(a+1) = 12; //stores 12 in a[1], this is how we can modify other values besides a[0]
               //in general, a+i is the same as &a[i](both rep a pointer to i of a)  and *(a+i) is equivalent to a[i]
  for (int i = 0; i < N; i++){
    a[i] = i;
    printf("a[%d] = %d\n", i, i);
  }
  for (p = a; p < a + N; p++){
    sum += *p;
    printf("%d\n", sum);
  }
  return 0;
}
