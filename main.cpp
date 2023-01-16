#include "sortHelper.h"
#include "timer.h"
#include <functional>
#include <iostream>
using namespace std;

void sort(std::vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    srand(time(0));
    SortHelper helper;
    vector<int> arr;

    helper.generate(arr, 10000, 100);
    helper.displayTime(arr, sort);
    //    helper.compare(arr, sort, sort2);
    //    helper.display(arr);
    //    helper.displayTime(sort(arr));

    return 0;
}
