#include "header/laser.hpp"
#include <raylib.h>

Laser::Laser(Vector2 position, int speed) {
  this->speed = speed;
  this->position = position;
}

void Laser::Draw() { DrawRectangle(position.x, position.y, 4, 15, YELLOW); }
void Laser::Update() { position.y += speed; }
bool Laser::IsOffScreen() {
  if (position.y < 0 || position.y > GetScreenHeight())
    return true;
  return false;
}
