#pragma once

#include "beverage.h"

class Tea : public Beverage {
public:
  Tea();
  double getPrice();
  string getDescription();
};
