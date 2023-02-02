#include "sugar.h"

Sugar::Sugar(Beverage *beverage) : Condiment(beverage) {}

double Sugar::getPrice() { return 0.9 + beverage_->getPrice(); }

string Sugar::getDescription() {
  return beverage_->getDescription() + "\n\t+Sugar";
}
