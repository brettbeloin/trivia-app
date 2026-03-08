#include "window.h"
#include <raylib.h>

int main(void) {
  InitWindow(width, height, "Trivia App");
  SetTargetFPS(60);

  text_width = MeasureText(text, font_size);
  int x = (width - text_width) / 2;
  int y = height / 2;

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);
    DrawText(text, x, y, font_size, WHITE);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
