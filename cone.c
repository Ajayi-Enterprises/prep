#include <stdio.h>

int main(void) {
  // Using refernece to get memory address
  int age = 21;
  printf("%p\n", &age);

  // Using pointers
  int *ptr = &age;          // Declaring the pointer to age - ptr
  printf("%p\n", ptr);      // Printing the pointer initialized from age
  printf("%d\n", *ptr);     // Dereferncing to get the value in pointer

  return 0;
}

// This is a new addition, please check
