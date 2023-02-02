#pragma once

#include "condiment.h"

class Sugar : public Condiment {
public:
  Sugar(Beverage *beverage);
  double getPrice();
  string getDescription();
};
