#include <stdio.h>
#include <math.h>
//program uses Newton's method to compute the square root of a positive floating point number
int main(void){
  double x, division, average, difference, product, old_val, y = 1;  
  printf("Enter a positive number: ");
  scanf("%lf", &x);
  do {
    division = (x / y);
    average = (y + division) / 2;
    difference = y - average;
    old_val = y;
    y = average;
    product = .00001 * y; 
  }while (fabs(difference) > product);
  printf("Square root: %.5lf\n", y);
  return 0;
}
