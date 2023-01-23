#include "sortHelper.h"
#include "timer.h"
#include <functional>
#include <iostream>
using namespace std;

/*
    arr[] = {4 7 2 3 8 1}

       4   7    2 3 8 1

       index = 1

*/

void sortInsert(std::vector<int>& arr)
{
    int keyValue, j;
    for (int i = 0; i < arr.size(); i++) {
        keyValue = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > keyValue; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = keyValue;
    }
}

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
    vector<int> arr, arr2;

    helper.generate(arr, 100000, 100);
    arr2 = arr;
    helper.displayTime(arr, sortInsert);
    helper.displayTime(arr2, sort);
    //    helper.compare(arr, sort, sort2);
    //    helper.display(arr);
    //    helper.display(arr2);
    //    helper.displayTime(sort(arr));

    return 0;
}
