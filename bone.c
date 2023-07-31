#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int mynum;
  char name;

  printf("Type a number: \n");
  scanf("%d %c", &mynum, &name);
  printf("Your input was: %d %c\n", mynum, name);

  char myName[20];

  printf("Enter your first name: \n");
  scanf("%s", myName);
  printf("Hello %s\n", myName);
  
  char fullName[40];

  printf("Enter your full name: \n");
  fgets(fullName, sizeof(fullName), stdin);
  printf("Hello %s\n", fullName);

  return 0;
}

// This is a new addition, please check

