#include "sortHelper.h"

#include "timer.h"
#include <time.h>

void SortHelper::displayTime(std::vector<int>& arr,
    std::function<void(std::vector<int>&)> sort)
{
    Timer timer;
    timer.start();
    sort(arr);
    std::cout << "elapsed " << timer.elapsed() << " seconds" << std::endl;
}

void SortHelper::compare(std::vector<int>& arr,
    std::function<void(std::vector<int>&)> func,
    std::function<void(std::vector<int>&)> func2)
{
    std::vector<int> arr2 = arr;
    Timer timer;
    timer.start();
    func(arr);
    auto time1 = timer.elapsed();
    timer.start();
    func2(arr2);
    auto time2 = timer.elapsed();
    std::cout << "func1 duration " << time1 << " seconds" << std::endl;
    std::cout << "func2 duration " << time2 << " seconds" << std::endl;
    if (time1 < time2) {
        std::cout << "func1 is faster than func2 on " << time2 - time1 << "seconds" << std::endl;
    } else {
        std::cout << "func2 is faster than func2 on " << time1 - time2 << "seconds" << std::endl;
    }
}

void SortHelper::display(const std::vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void SortHelper::generate(std::vector<int>& arr, int count, int maxValue)
{
    for (int i = 0; i < count; i++) {
        arr.push_back(rand() % maxValue);
    }
}
