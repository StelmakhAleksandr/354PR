#include "sortHelper.h"

void SortHelper::display(const std::vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
