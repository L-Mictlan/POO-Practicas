#include "QuickSort.h"

std::vector<int> QuickSort::sort(const std::vector<int>& data) {
    return quicksort(data);
}

std::vector<int> QuickSort::quicksort(std::vector<int> arr) {
    if (arr.size() <= 1)
        return arr;

    int pivot = arr[arr.size() / 2];

    std::vector<int> left, middle, right;

    for (int x : arr) {
        if (x < pivot)
            left.push_back(x);
        else if (x == pivot)
            middle.push_back(x);
        else
            right.push_back(x);
    }

    left = quicksort(left);
    right = quicksort(right);

    left.insert(left.end(), middle.begin(), middle.end());
    left.insert(left.end(), right.begin(), right.end());

    return left;
}