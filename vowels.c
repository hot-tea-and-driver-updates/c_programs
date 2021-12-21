#include <stdio.h>
#include <ctype.h>
int main(void){
  printf("Enter a sentence: ");
  char ch;
  int counter = 0;
  do{
    ch = toupper(getchar());
    // putchar(ch);
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
      counter += 1;
    }else{
      NULL;
    }
  }while (ch != '\n');
  printf("Your sentence contains %d vowels.\n", counter);
  return 0;
}
