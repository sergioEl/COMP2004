#include <stdio.h>

void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a = 2;
  int b = 16;
  printf("%d  %d\n", a, b);
  swap(&a, &b); /* swap the values */
  printf("%d  %d\n", a, b);
}