#pragma once

#include "beverage.h"

class Coffee : public Beverage {
public:
  Coffee();
  double getPrice();
  string getDescription();
};
