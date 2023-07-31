#include <stdio.h>

int main(void) {
  // Declaring variables
  int aka1;
  int aka2;
  int sum;

  // Collecting inputs
  printf("aka1: ");
  scanf("%d", &aka1);
  printf("aka2: ");
  scanf("%d", &aka2);

  // Operation and sum
  sum = aka1 + aka2;
  printf("sum: %d\n", sum);

  return 0;
}
