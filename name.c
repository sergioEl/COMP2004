#include <stdio.h>

int main() {
  char myname[10] = "Hello";
  printf("Enter your name: ");
  scanf("%9s", myname); 
  printf("Your name is: %s\n", myname);
  printf("%c%c\n", myname[0], myname[1]);
}