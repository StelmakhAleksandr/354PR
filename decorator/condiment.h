#pragma once

#include "beverage.h"

class Condiment : public Beverage {
public:
  Condiment(Beverage *beverage);

protected:
  Beverage *beverage_;
};
