#include <stdio.h>

int main(void)
{
  printf("Hi\n");
  printf("finally got it to work with vscode\n");

  int num1 = 8;
  int num2 = 5;

  if (num1 == 8) {
    printf("It works just fine\n");
    
    if (num2 == 5) {
      printf("Testing Indent Line Plugin\n");
      num2 = 10;
    }
  } 

  return 0;
}
