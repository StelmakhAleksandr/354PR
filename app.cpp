#include "app.h"

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
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

App* App::instance_ = nullptr;

App* App::getInstance()
{
    if (!instance_)
        instance_ = new App();
    return instance_;
}

App::App()
{
}

void App::run()
{
    srand(time(0));
    SortHelper helper;
    std::vector<int> arr;

    helper.generate(arr, 1000, 100);
    helper.compare(arr, sort, sortInsert);
}
