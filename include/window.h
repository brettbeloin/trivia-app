#ifndef window_h
#define window_h

typedef struct {
  char *text;
  char *title;
  int font_size;
  int height;
  int width;
} window;

void create_window(const window *win);

#endif
