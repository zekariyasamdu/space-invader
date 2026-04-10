#pragma once
#include "laser.hpp"
#include <raylib.h>

class Alien {
private:
  Vector2 position;
  Texture2D image;
  float cool_down_period;
  float last_fired_time;
  bool move_right;
  void MoveRight();
  void MoveDown();
  void MoveLeft();

public:
  Alien();
  ~Alien();
  void Draw();
  void Movement();
  void SetLastFiredTime(float time);
  Laser FireLaser();
  float LastFiredTime();
  float CoolDownPeriod();
};
