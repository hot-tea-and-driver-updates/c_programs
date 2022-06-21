#include <stdio.h>
#define LEN 100
double average(double a, double b){
 return (a+b) / 2;
}

void print_count(int n){
  printf("T minus %d and counting\n", n);
}

void fill_array(int a[], int n){
  int i;
  for (i = 0; i < n; i++){
    a[i] = i;
  }
}

void fun(){
  static int count = 0; //static variables can be declared outside of all
                        //functions using static keyword, will retain life
                        //until eop, like a global  but cannot be accessed
                        //by extern files, unlike a global
  count++;
  printf("%d\n", count);
}
int main(void){
  //    double first = 10;
  //    double second = 20;
  //    double final = average(10, 20);
  printf("Average: %g\n", average(10,20));
  int i;

  for (i = 10; i > 0; i--){
    print_count(i);
  }
  int b[LEN], total; //creates array of ints of len 100, an int type total
  //  total = fill_array(b, LEN); //notice we don't put brackets after array name                               when passing as argument
  fill_array(b,LEN);
  total = b[99];
  //  fill_array((int []), LEN); this is a compound literal! (type){values}
  // can contain expressions!
  printf("%d\n",total);
  fun();
  fun();
  return 0; //return statements do implicit conversion if function does not match return type
  //exit and return are same except that exit causes program termination regardless of which function calls it, return only causes program termination when it appears in the main function
}
