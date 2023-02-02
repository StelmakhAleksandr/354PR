#pragma once

#include "condiment.h"

class Milk : public Condiment {
public:
  Milk(Beverage *beverage);
  double getPrice();
  string getDescription();
};
