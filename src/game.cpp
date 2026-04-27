#include "header/game.hpp"
#include "header/alien.hpp"
#include "header/utils.hpp"
#include <raylib.h>

Game::Game() { aliens.emplace_back(); }

void Game::Draw() {
  spaceship.Draw();
  for (auto &alien : aliens) {
    alien.Draw();
  }
  for (auto &laser : lasers) {
    laser.Draw();
  }
};

void Game::Update() {

  // Laser cleanup
  for (int i = 0; i < lasers.size(); i++) {
    lasers[i].Update();
    if (lasers[i].IsOffScreen()) {
      lasers.erase(lasers.begin() + i);
      i--;
    }
  }

  // aliens movement
  for (auto &alien : aliens) {
    alien.Movement();
  }

  // check collision
  for (int i = 0; i < lasers.size(); i++) {
    for (int j = 0; j < aliens.size(); j++) {
      if (CheckCollision(lasers[i], aliens[j])) {
        lasers.erase(lasers.begin() + i);
        aliens.erase(aliens.begin() + j);
        i--;   // adjust laser index
        break; // 🔥 stop checking this laser
      }
    }
  }
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
