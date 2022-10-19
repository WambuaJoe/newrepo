#include "main.h"



int main() {
  int a = 10;
  int* p;
  p = &a;

  printf("%d\n", p);
  printf("size of integer is %d bytes\n", sizeof(int));
  printf("%d\n", (p + 1));
}