#pragma once

#include <functional>
#include <iostream>
#include <vector>

class SortHelper {
public:
    SortHelper() = default;
    // generate
    // display
    // track time
    void displayTime(std::vector<int> &arr, std::function<void (std::vector<int> &)> func);
    void display(const std::vector<int>& arr);
    void generate(std::vector<int>& arr, int count, int maxValue);

private:
};
