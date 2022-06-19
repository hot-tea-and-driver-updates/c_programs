#include <stdio.h>
//since the value of weight is truncated down when we want it to be rounded up, adding 165 before dividing by 166
//allows truncation to give us the correct value. 
#define INCHES_PER_POUND 166
int main(void)
{
  int height, length, width, volume, weight;

  printf("Enter length of box: ");
  scanf("%d", &length);
  
  printf("Enter height of box: ");
  scanf("%d", &height);
  
  printf("Enter width of box: ");
  scanf("%d", &width);
  
  volume = height * length * width;
  weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
  
  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

  return 0;
}
