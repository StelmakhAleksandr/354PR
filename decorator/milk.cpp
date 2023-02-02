#include "milk.h"

Milk::Milk(Beverage *beverage) : Condiment(beverage) {}

double Milk::getPrice() { return 20 + beverage_->getPrice(); }

string Milk::getDescription() {
  return beverage_->getDescription() + "\n\t+Milk";
}
