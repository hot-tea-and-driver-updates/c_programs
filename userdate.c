#include <stdio.h>

int main(void)
{
  float date1, date2, date3;
  printf("Please enter a date in format mm/dd/yyyy: ");
  scanf("%2f / %2f / %4f", &date1, &date2, &date3);
  printf("%4.0f%02.0f%2.0f\n", date3, date2, date1);
}
