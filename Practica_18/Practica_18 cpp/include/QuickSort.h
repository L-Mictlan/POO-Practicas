#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "ISortStrategy.h"

class QuickSort : public ISortStrategy {
public:
    std::vector<int> sort(const std::vector<int>& data) override;

private:
    std::vector<int> quicksort(std::vector<int> arr);
};

#endif