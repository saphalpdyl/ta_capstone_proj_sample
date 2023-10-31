#pragma once

#include <iostream>

class EntityGroup {
 public:
  // Overload Constructors
  EntityGroup(int numberCount, float damage, float health);
  EntityGroup();

 private:
  int numberCount;
  float damage, health;
};
