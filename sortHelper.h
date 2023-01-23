#pragma once

#include <functional>
#include <iostream>
#include <vector>

class SortHelper {
public:
    SortHelper() = default;
    void generate(std::vector<int>& arr, int count, int maxValue);
    void display(const std::vector<int>& arr);
    void displayTime(std::vector<int>& arr,
        std::function<void(std::vector<int>&)> func);
    void compare(std::vector<int>& arr,
        std::function<void(std::vector<int>&)> func,
        std::function<void(std::vector<int>&)> func2);

private:
};
