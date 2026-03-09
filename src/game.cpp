#include "header/game.hpp"
#include <raylib.h>

void Game::Draw() {
  spaceship.Draw();
  for (auto &laser : lasers) {
    laser.Draw();
  }
};

void Game::Update() {
  for (auto &laser : lasers) {
    laser.Update();
  }
};

void Game::HandleInput() {
  if (IsKeyDown(KEY_LEFT))
    spaceship.MoveLeft();
  if (IsKeyDown(KEY_RIGHT))
    spaceship.MoveRight();
  if (IsKeyDown(KEY_UP)) {
    lasers.push_back(spaceship.FireLaser());
  }
}
