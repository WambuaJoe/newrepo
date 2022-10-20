#include "main.h"

int main() {
  int age;
  int* addr = &age;
  *addr = 10;
  printf("Age: %d\n", *addr);

}
