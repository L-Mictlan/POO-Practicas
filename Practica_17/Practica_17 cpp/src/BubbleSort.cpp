#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(const std::vector<int>& data) {
    std::vector<int> arr = data;
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }

    return arr;
}