#include "EntityGroup.h"

EntityGroup::EntityGroup(int numberCount, float damage, float health)
    : numberCount(numberCount), damage(damage), health(health) {}

EntityGroup::EntityGroup() {
  numberCount = 0;
  damage = 0;
  health = 0;
}
