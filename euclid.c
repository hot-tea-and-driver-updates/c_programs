#include <stdio.h>
//program employs classic algorithm for computing the GCD
int main(void){
  int one, two, remainder, gcd;
  printf("Enter two integers: ");
  scanf("%d %d", &one, &two);
  while(one != 0 || two != 0){
    remainder = one % two;
    one = two;
    two = remainder;
    if(one == 0){
      gcd = two;
      break;
    }
    else if(two == 0){
      gcd = one;
      break;
    }
  }
  printf("Greatest common divisor is: %d\n", gcd);
  return 0;
}
