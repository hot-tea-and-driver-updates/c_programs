#include <stdio.h>
//converts 12 hour time to 24 time
int main(void){
  int hours, minutes;
  char first, second;
  printf("Enter a 12-hour time in (hours:minutes) form followed by a AM or PM: ");
  scanf("%d : %d %c%c", &hours, &minutes, &first, &second);
  //  printf("%d:%d %c%c\n", hours, minutes, first, second);
  if (first == 'A' && hours == 12){
    hours = 0;
    if (minutes < 10){
      printf("Equivalent 24-hour time: %02d:%02d\n", hours, minutes);
    }else{
      printf("Equivalent 24-hour time: %02d:%d\n", hours, minutes);
    }
  }else if(first == 'A' && hours < 12){
    if(minutes < 10){
      printf("Equivalent 24-hour time: %02d:%02d\n", hours, minutes);
    }else{
      printf("Equivalent 24-hour time: %02d:%d\n", hours, minutes);
    }
  }else{
    hours += 12;
    if(minutes < 10){
      printf("Equivalent 24-hour time: %02d:%02d\n", hours, minutes);
    }else{
      printf("Equivalent 24-hour time: %02d:%d\n", hours, minutes);
    }
  }
  return 0;
}
