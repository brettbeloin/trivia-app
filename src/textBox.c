#include <raylib.h>
#include <stdio.h>
#include <textBox.h>

void f() {
  int foo = CheckCollisionPointRec(GetMousePosition(), text_box);
  printf("%d", foo);
}
