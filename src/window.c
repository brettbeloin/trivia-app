#include <raylib.h>
#include <window.h>

void create_window(const window *win) {
  InitWindow(win->width, win->height, win->title);
  SetTargetFPS(60);

  int text_width = MeasureText(win->text, win->font_size);
  int x = (win->width - text_width) / 2;
  int y = win->height / 2;

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(WHITE);
    DrawText(win->text, x, y, win->font_size, BLACK);
    EndDrawing();
  }

  CloseWindow();
}
