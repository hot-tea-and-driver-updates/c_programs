#include <stdio.h>

int main(void){
  int i;
  printf("Enter phone number: ");
  while(getchar() != '\n'){
    if (getchar() == 9){
      printf("works");
    }else{
      break;
    }
  }
  return 0;
}
