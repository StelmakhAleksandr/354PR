#include "beverage.h"

Beverage::Beverage() {}

void Beverage::display() {
  cout << getDescription() << " " << getPrice() << endl;
}
