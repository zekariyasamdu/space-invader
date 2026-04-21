#include "header/laser.hpp"
#include <raylib.h>

Laser::Laser(Vector2 position, int speed) {
  this->speed = speed;
  this->position = position;
  this->width = 4;
  this->height = 15;
}

void Laser::Draw() {
  DrawRectangle(position.x, position.y, this->width, this->height, YELLOW);
}
void Laser::Update() { position.y += speed; }
bool Laser::IsOffScreen() {
  if (position.y < 0 || position.y > GetScreenHeight())
    return true;
  return false;
}
Rectangle Laser::GetRect() const {
  return {position.x, position.y, this->width, this->height};
}
