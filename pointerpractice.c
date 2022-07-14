#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);
void avg_sum(double a[], int n, double *avg, double *sum);

int main(void){
  int b[N], i, big, small;
  double c[N], j, avg, sum;
  printf("Enter %d numbers: ", N);
  for (i = 0; i < N;  i++){
    scanf("%lf", &c[i]);
  }
  
  max_min(b, N, &big, &small);
  avg_sum(c, N, &avg, &sum);
  
  printf("Largest: %d\n", big);
  printf("Smallest: %d\n", small);
  printf("Sum: %f, Avg: %f\n", sum, avg); 
  return 0;
}



void max_min(int a[], int n, int *max, int *min){
  int i;

  *max = *min = a[0];
  for (i = 1; i < n; i++){
    if (a[i] > *max)
      *max = a[i];
    else if (a[i] < *min)
      *min = a[i];
  }
}

void avg_sum(double a[], int n, double *avg, double *sum){
  int i;
  *sum = 0.0;
  for (i = 0; i < n; i++){
    *sum += a[i];
  }
  printf("%f", *sum);
  *avg = *sum / n;
}
