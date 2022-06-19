#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;
  printf("Enter first fraction (d/d): ");
  scanf("%d / %d", &num1, &denom1);

  printf("Enter second fraction: ");
  scanf("%d / %d", &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;
  printf("The sum is %d/%d\n", result_num, result_denom);

  float value = 90.345;
  printf("%-8.1e\n", value);
  printf("%10.6e\n", value);
  printf("%-8.3f\n", value);
  printf("%6.0f\n", value);
  return 0;
}
