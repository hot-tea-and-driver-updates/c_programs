#include <stdio.h>

int check(int x, int y,int n){
  if (x > 0){
    if (x < n){
      if (y > 0){
	if (y < n){
		  return 1;
		}
	    }
	}
    }else{
    return 0;
  }
}
int main(void){
  printf("%d\n",check(1,2,10));
  printf("%d\n",check(-4,5,1));
  return 0;
}
