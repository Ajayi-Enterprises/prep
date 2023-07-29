// Functions
#include <stdio.h>

void myFunc(char name[], int age) {
  printf("Hi my name is %s. I am %i years old.\n", name, age);
}

int fibonacci(int x) {
  int base = 0;
  int next = 1;

  int value = base + next;
  base = next;
  next = value;
  x -= 1;

  if (x == 1)
    return base;
  else
    return (next);
}

int collatz(int num) {
  if (num == 1)
    return 0;
  else if (num % 2 == 0)
    return 1 + collatz(num / 2);
  else
    return 1 + collatz(3 * num + 1);
}

int main(void) {
  myFunc("Elisha", 21);
  int n = fibonacci(1);
  printf("%d\n", n);

  int m = collatz(3419);
  printf("%d\n", m);

  return 0;
}
