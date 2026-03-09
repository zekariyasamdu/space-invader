#include "header/spaceship.hpp"
#include "header/laser.hpp"
#include <raylib.h>

Spaceship::Spaceship() {
  image = LoadTexture("graphics/spaceship.png");
  position.x = ((float)GetScreenWidth() - image.width) / 2;
  position.y = GetScreenHeight() - image.height - 10;
};

Spaceship::~Spaceship() { UnloadTexture(image); };

void Spaceship::Draw() { DrawTextureV(image, position, WHITE); };

void Spaceship::MoveRight() {
  if (position.x < GetScreenWidth() - image.width) {
    position.x += 5;
  }
};

void Spaceship::MoveLeft() {
  if (position.x > 0) {
    position.x -= 5;
  }
};

Laser Spaceship::FireLaser() {
  Vector2 position;
  position.x = this->position.x + ((float)image.width / 2) - 2;
  position.y = this->position.y;
  Laser laser(position, -4);
  return laser;
};
