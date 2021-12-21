#include <stdio.h>
//write a program that prints the values of sizeof(int), sizeof(short), sizeof(long),
//sizeof(float), sizeof(double), and sizeof(long double)
int main(void){
  printf("Size of int: %lu\n", (unsigned long) sizeof(int));
  printf("Size of short: %lu\n", (unsigned long) sizeof(short));
  printf("Size of long: %lu\n", (unsigned long) sizeof(long));
  printf("Size of float: %lu\n", (unsigned long)  sizeof(float)); 
  printf("Size of double float: %lu\n", (unsigned long) sizeof(double));
  printf("Size of long double float: %lu\n",(unsigned long) sizeof(long double));
}

