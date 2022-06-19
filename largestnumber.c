#include <stdio.h>

int main(void){
  float firstnumber;
  float largestnumber = 1;
  while (firstnumber != 0){
    printf("Enter a number: ");
    scanf("%f", &firstnumber);
    if (firstnumber > largestnumber){
      largestnumber = firstnumber;
    }
  }
  printf("The largest number entered was: %.2f\n", largestnumber);
  return 0;
}
