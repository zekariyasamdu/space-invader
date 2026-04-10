#include "header/game.hpp"
#include <raylib.h>

void Game::Draw() {
  spaceship.Draw();
  alien.Draw();
  for (auto &laser : lasers) {
    laser.Draw();
  }
};

void Game::Update() {
  for (int i = 0; i < lasers.size(); i++) {
    lasers[i].Update();
    if (lasers[i].IsOffScreen()) {
      lasers.erase(lasers.begin() + i);
      i--;
    }
  }

  alien.Movement();
};

void Game::HandleInput() {
  if (IsKeyDown(KEY_LEFT))
    spaceship.MoveLeft();
  if (IsKeyDown(KEY_RIGHT))
    spaceship.MoveRight();
  if (IsKeyDown(KEY_UP)) {
    float last_fired_time = spaceship.LastFiredTime();
    float cool_down = spaceship.CoolDownPeriod();
    float current_time = GetTime();
    float time_difference = current_time - last_fired_time;
    if (time_difference > cool_down) {
      Laser laser = spaceship.FireLaser();
      lasers.push_back(laser);
      current_time = GetTime();
      spaceship.SetLastFiredTime(current_time);
    }
  }
}
