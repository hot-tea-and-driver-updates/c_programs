#include <stdio.h>

void day_of_year(int month, int day, int year){
  int leap_year = 0;
  if ((year % 4) == 0){
    leap_year = 1;
  }
  //  int longmonth[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
  int daysofmonth[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
  int totaldays;
  if (month != 1){
    totaldays += daysofmonth[month-1];
  }
  if ((leap_year == 1)&&(month > 2)){
    totaldays += 1;
  }
  printf("%d\n",totaldays);
}

int main(void){
  int date[3];
  printf("Please enter a valid date in MM/DD/YYYY format: ");
  for(int i = 0; i < 3; i++){
    scanf("%d%*c", &date[i]);
    printf("%d\n",i);
  }
  for(int i = 0; i < 3; i++){
    printf("%d\n",date[i]);
  }
  if ((date[0] < 1)||(date[0] > 12)){
    printf("Invalid date entered.\n");
    goto Exit;
  }
  else if ((date[1] < 1) || (date[1] > 31) || (date[0] == 2)&&((date[1] > 29))){
    printf("Invalid date entered.\n");
    goto Exit;
  }
  day_of_year(date[0],date[1],date[2]);
  Exit: return(0);
  return(0);
}
