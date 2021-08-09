#pragma once

#include "EntityGroup.h"

class Game {
 public:
  void init();
  void start();

 private:
  EntityGroup ninjas;
  EntityGroup ghosts;
};
