#pragma once
#include "alien.hpp"
#include "laser.hpp"
#include "spaceship.hpp"
#include <raylib.h>
#include <vector>

class Game {
private:
  Spaceship spaceship;
  std::vector<Alien> aliens;
  std::vector<Laser> lasers;
  Alien test;

public:
  Game();
  void Draw();
  void Update();
  void HandleInput();
};
