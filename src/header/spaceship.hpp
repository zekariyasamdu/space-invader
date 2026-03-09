#pragma once
#include "laser.hpp"
#include <raylib.h>
class Spaceship {

private:
  Vector2 position;
  Texture2D image;

public:
  Spaceship();
  ~Spaceship();
  void Draw();
  void MoveLeft();
  void MoveRight();
  Laser FireLaser();
};
