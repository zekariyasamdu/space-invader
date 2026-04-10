#pragma once
#include "alien.hpp"
#include "laser.hpp"
#include "spaceship.hpp"
#include <raylib.h>
#include <vector>

class Game {
private:
  Spaceship spaceship;
  Alien alien;
  std::vector<Laser> lasers;

public:
  void Draw();
  void Update();
  void HandleInput();
};
