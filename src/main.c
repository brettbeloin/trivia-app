#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void fiz();

int main(int argc, char *argv[]) {
  int age = 22;

  if (age >= 21) {
    printf("you are %d years old. you can come in.\n", age);
  } else {
    printf("you are %d years old. you can not come in.\n", age);
  }

  fiz();

  return EXIT_SUCCESS;
}

void fiz() {
  int foo[10] = {1, 2, 3, 4, 5, 10, 12, 15, 18, 20};

  for (int i = 0; i < (sizeof foo / sizeof foo[0]); i++) {
    if (foo[i] % 15 == 0) {
      printf("%d is a: FizzBuzz\n", foo[i]);
    } else if (foo[i] % 5 == 0) {
      printf("%d is a: Buzz\n", foo[i]);
    } else if (foo[i] % 3 == 0) {
      printf("%d is a: Fizz\n", foo[i]);
    } else {
      printf("%d\n", foo[i]);
    }
  }
}
