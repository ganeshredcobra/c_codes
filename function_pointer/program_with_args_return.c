#include <stdio.h>

// function prototype
int subtractAndPrint(int x, int y);

// function implementation
int subtractAndPrint(int x, int y) {
  int z = x - y;
  printf("Simon says, the answer is: %d\n", z);
  return z;
}

// calling from main
int main() {
  int (*sapPtr)(int, int) = subtractAndPrint;
  int ans = (*sapPtr)(10, 2);
  printf("the answer is: %d\n", ans);

  int ans1 = sapPtr(20, 2);
  printf("the answer is: %d\n", ans1);
}
