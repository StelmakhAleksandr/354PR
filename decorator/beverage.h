#pragma once

#include <iostream>
using namespace std;

class Beverage {
public:
  Beverage();
  virtual double getPrice() = 0;
  virtual string getDescription() = 0;
  void display();
};
