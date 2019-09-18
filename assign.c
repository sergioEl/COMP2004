#pragma clang diagnostic ignored "-Wunused-value"

#include <math.h>
#include <stdio.h>

// <return value> <name>(<arguements>)
//     statement

int multiply(int p, int q) { return p * q; }

int main() {
  int i, j;
  j = i = 4;
  sqrt(4 * 4);
  if (i == 4) {
    printf("Four");
    // more work
  } else if (i == 3) {
    printf("Three");
  }

  int p;
  for (int i = 0; p < 5; p++) {
    printf("Hello CS2004");
  }
  for (;;) {
    // infinite loop
  }

#define TRUE 1
  int q;
  printf("while hello");
  int once = 0;
  while (once == 0 || q < 5) {
    printf("while hello");
    once = 1;
    q++;
  }
}