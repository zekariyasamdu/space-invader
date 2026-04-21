#include "header/utils.hpp"
#include "header/alien.hpp"
#include "header/laser.hpp"
#include <raylib.h>

bool CheckCollision(const Laser &laser, const Alien &alien) {
  Rectangle laserRect = laser.GetRect();
  Rectangle alienRect = alien.GetRect();

  return CheckCollisionRecs(laserRect, alienRect);
}
