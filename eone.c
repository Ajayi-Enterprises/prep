// Recursion and math header
#include <stdio.h>
#include <math.h>

int sum(int k);

int main() {
  int a = sum(5);
  printf("%d\n", a);
  printf("%f\n", pow(a, 2));
  return 0;
}

int sum(int k) {
  if (k == 0)
    return 0;
  else 
    return k + sum(k - 1);
}
