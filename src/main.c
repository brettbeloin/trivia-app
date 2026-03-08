#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int age = 22;

  if (age >= 21) {
    printf("you are %d years old. you can come in.", age);
  } else {
    printf("you are %d years old. you can not come in.", age);
  }
  return EXIT_SUCCESS;
}
