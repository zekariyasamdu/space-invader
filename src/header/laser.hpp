#pragma once
#include <raylib.h>
class Laser {

private:
  Vector2 position;
  int speed;
  float width;
  float height;

public:
  Laser(Vector2 position, int speed);
  void Draw();
  void Update();
  Rectangle GetRect() const;
  bool IsOffScreen();
};
