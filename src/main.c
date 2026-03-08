#include "window.h"
#include <raylib.h>

int main(int argc, char *argv[]) {
  InitWindow(width, height, "Trivia App");
  SetTargetFPS(60);

  text_width = MeasureText(text, font_size);
  int x = (width - text_width) / 2;
  int y = height / 2;

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText(text, x, y, font_size, BLACK);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
