#include <stdio.h>

/**
  Build and execute with:

  emcc -s EXPORTED_FUNCTIONS="['_main', '_average']" -s NO_EXIT_RUNTIME=1 average.c -o average.js
  open average.html

  Note: don't build with -o average.html for supplied average.html is minimal html5 file without
  the emscripten testing environment overhead.
*/


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
