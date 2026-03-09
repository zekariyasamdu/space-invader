#include "header/game.hpp"
#include <raylib.h>

int main() {
  int windowWidth = 550;
  int windowHeight = 600;
  Color background = {0, 0, 0, 255};
  InitWindow(windowWidth, windowWidth, "space invader");
  SetTargetFPS(60);
  Game game;
  while (!WindowShouldClose()) {
    game.HandleInput();
    BeginDrawing();
    game.Update();
    ClearBackground(background);
    game.Draw();
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
