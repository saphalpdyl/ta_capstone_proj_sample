#pragma once

#include <iostream>

class EntityGroup {
 public:
  // Overload Constructors
  EntityGroup(int numberCount, float damage, float health);
  EntityGroup();

  // Overload Operators
  friend std::ostream& operator<<(std::ostream& os, EntityGroup& obj) {
    return os << "Numbers : " << obj.numberCount << "\nDamage : " << obj.damage
              << "\nHealth : " << obj.health;
  }

 private:
  int numberCount;
  float damage, health;
};
