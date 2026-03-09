#include <window.h>

int main(void) {
  window win = {
      .title = "Triva App",
      .text = "Triva Game",
      .font_size = 20,
      .height = 800,
      .width = 800,
  };

  create_window(win);
  return 0;
}
