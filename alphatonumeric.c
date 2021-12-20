#include <stdio.h>
//This program translates an alphabetic phone number into numeric form

int main(void){
  char ch;
  printf("Enter phone number:");
  do {
    ch = getchar();
    if (ch == 'A' || ch == 'B' || ch == 'C'){
      putchar('2');
    }else{
      putchar(ch);
    }
  }while (ch != '\n');
  return 0;
}
