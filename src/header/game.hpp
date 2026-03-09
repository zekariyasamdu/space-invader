#pragma once
#include "laser.hpp"
#include "spaceship.hpp"
#include <raylib.h>
#include <vector>

class Game {
private:
  Spaceship spaceship;
  std::vector<Laser> lasers;

public:
  void Draw();
  void Update();
  void HandleInput();
};
