#pragma once
#include "laser.hpp"
#include <raylib.h>
class Spaceship {

private:
  Vector2 position;
  Texture2D image;
  float cool_down_period = 0.50;
  float last_fired_time = 0.00;

public:
  Spaceship();
  ~Spaceship();
  void Draw();
  void MoveLeft();
  void MoveRight();
  void SetLastFiredTime(float time);
  Laser FireLaser();
  float LastFiredTime();
  float CoolDownPeriod();
};
