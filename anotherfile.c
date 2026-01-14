#include "cs136.h"

int fib_acc(int a, int b, int acc) {
  if (a==0) {
    return b;
  }
  else {
    return fib_acc(a-1, acc, b + acc);
  }
}
int fib(int n) {
  return fib_acc(n, 0, 1);
}

int main(void) {
  assert(fib(0) == 0);
  assert(fib(1) == 1);
  assert(fib(2) == 1);
  assert(fib(3) == 2);
  assert(fib(4) == 3);
  assert(fib(5) == 5);
  assert(fib(6) == 8);
  assert(fib(7) == 13);
  assert(fib(8) == 21);
  // If you use accumulative recursion, this should run instantly.
  // If you don't, it will take "too long".
  assert(fib(45) == 1134903170);
  printf("All tests passed!\n");
} 
