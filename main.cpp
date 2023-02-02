#include "app.h"
#include <vector>
using namespace std;

#include "decorator/coffee.h"
#include "decorator/milk.h"
#include "decorator/sugar.h"
#include "decorator/tea.h"

int main() {
  Beverage *coffee = new Milk(new Sugar(new Sugar(new Coffee())));
  coffee->display();
  return 0;
}
