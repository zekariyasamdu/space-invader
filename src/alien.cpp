#include "header/alien.hpp"
#include <raylib.h>

Alien::Alien() {
  image = LoadTexture("graphics/alien_1.png");
  position.x = ((float)GetScreenWidth() - image.width) / 2;
  cool_down_period = 0.50;
  last_fired_time = 0.00;
  position.y = (GetScreenHeight() / 2.00) - image.height;
  move_right = true;
};
Alien::~Alien() { UnloadTexture(image); };

void Alien::Draw() { DrawTextureV(image, position, WHITE); };

void Alien::MoveRight() {
  if (position.x < GetScreenWidth() - image.width) {
    position.x += 5;
    return;
  }
  move_right = false;
}

void Alien::MoveLeft() {
  if (position.x > 0) {
    position.x -= 5;
    return;
  }

  move_right = true;
};

void Alien::Movement() {
  if (move_right)
    MoveRight();
  else
    MoveLeft();
}
