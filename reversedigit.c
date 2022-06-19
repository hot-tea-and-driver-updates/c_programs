#include <stdio.h>
//reverses three digit number 
int main(void)
{
  int i, j, k;
  //  int j;
  //  int z;
  //  int k;
  printf("Please enter a three-digit number: ");
  scanf("%1d%1d%1d", &i, &j, &k);
  //  j = ((i % 100) / 10); // tens digit
  //  k = (i  % 10); // ones digit
  //  z = (i / 100); //hundreds digit
  printf("The number in reversal is: %1d%1d%1d\n", k,  j, i);
}
