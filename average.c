#include <stdio.h>

double average(int len,  const double array[]) {
  double avg = 0;
  for (int i=0; i < len; i+=1) {
    avg += array[i];
  }

  return avg/len;
}

int main() {
  const double a[] = {10.2, 11.3, 10.3};
  printf("Average is %f\n", average(3, a));
}
