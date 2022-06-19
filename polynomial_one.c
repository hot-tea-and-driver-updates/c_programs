#include <stdio.h>

int main(void)
{
  int x;

  printf("Please enter a value for x: ");
  scanf("%d",&x);
  
  int first_value = 3 * (x * x * x * x * x);
  int second_value = 2 * (x * x * x * x);
  int third_value = 5 * (x * x * x);
  int fourth_value = (x * x);
  int fifth_value = 7 * x;
  int polynomial = first_value + second_value - third_value - fourth_value + fifth_value - 6;
  printf("Value of the following polynomial, 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6, is : %d", polynomial);
  printf("\n");
  return 0;
}
