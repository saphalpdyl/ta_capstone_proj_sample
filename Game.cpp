#include "Game.h"

void Game::init() {
  ninjas = EntityGroup(10, 20.0f, 30.0f);
  ghosts = EntityGroup(20, 30.0f, 40.0f);

  std::cout << ninjas << std::endl;
}

void Game::start() {}
