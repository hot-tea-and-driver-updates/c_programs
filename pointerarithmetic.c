#include <stdio.h>

#define N 10

int main(void){
  int a[N], *p, *q, i;

  for(int i = 0; i < N; i++){
    a[i] = i;
    printf("a[%d] = %d\n", i, i);
  }
  //lets add an integer to a pointer
  //adding an integer j to a pointer p yields a pointer to the element j
  //places after the one that p points to. i.e. if p -> a[i] then
  // p + j -> a[i+j] assuming that the place actually exists
  p = &a[2];

  q = p + 3;

  p += 6;
  
  //subtracting one pointer from another

  p - &a[5];
  q = &a[1];

  i = p - q; // i is 4
  i = q - p; // i is -4

  //performing arithmetic on a pointer that doesnt point to an array element
  //causes undefined behavior, subtracting one pointer from another is UB
  //unless they are from same array


  //to sum the elements of the array a, we could write
  int sum = 0;
  p = &a[0];
  while (p < &a[N]) // since this statement is not actually evaluated until the loop ends it's perfectly fine 
    sum += *p++;
  printf("%d\n", sum);
  return 0;
}
