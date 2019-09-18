#include <stdio.h>

struct point {
  int x;
  int y;
  struct point *nextpoint;  // list can't have int point
};
struct point makepoint(int x, int y) {
  struct point temp;
  temp.x = x;
  temp.y = y;
  temp.nextpoint = 0; // Same as NULL
  return temp;
}

int main() {
  struct point mp1, mp2;
  struct point *i;
  mp1 = makepoint(5, 6);
  mp2 = makepoint(7, 8);
  // link mp1 to mp2
  mp1.nextpoint = &mp2;

  // header
  printf("curr ptr\tx\ty\tnext ptr\n");

  // list of known length
  // point to start of list
  i = &mp1;
  for (int j = 0; j < 2; j++) {
    printf("%p\t%d\t%d\t", i, (*i).x, (*i).y);
    i = (*i).nextpoint;
    printf("%p\n", i);
  }
  printf("-----------\n");

  // list of unknown length
  i = &mp1;
  while (i != NULL) {
    printf("%p\t%d\t%d\t", i, (*i).x, (*i).y);
    i = (*i).nextpoint;
    printf("%p\n", i);
  }
}