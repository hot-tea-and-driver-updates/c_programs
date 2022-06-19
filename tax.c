#include <stdio.h>

int main(void)
{
  float taxed_value, dollars_and_cents;
  
  printf("Please enter a dollar and cents amount: ");
  scanf("%f", &dollars_and_cents);
  
  taxed_value = dollars_and_cents + (dollars_and_cents * .05);
  printf("With tax added: $%.2f",taxed_value);
  printf("\n");

  return 0;
}
