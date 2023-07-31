#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE *fptr;

  fptr = fopen("cone.c", "a");
  fprintf(fptr, "\n// This is a new addition, please check\n");

  fclose(fptr);

  return 0;
}
