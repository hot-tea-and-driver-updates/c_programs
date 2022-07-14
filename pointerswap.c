#include <stdio.h>


void swap(int *p, int *q);


int main(void){
  int i = 10;
  int j = 20;
  printf("original values: i: %d, j: %d\n",i,j);
  swap(&i, &j);
  printf("new values: i: %d, j: %d\n",i,j);
  return 0;
}

void swap(int *p, int *q){ //essentially *p = &i, etc
  int placeholder;
  printf("swap function original values: *p = %d, *q = %d\n", *p, *q);
  placeholder = *q;
  printf("swap function test for placeholder: %d\n", placeholder);
  *q = *p;
  printf("swap function test for q: %d\n", *q); 
  *p = placeholder; //sets the object that p points to equal to placeholder
  printf("swap function test for p: %d\n", *p);
}
