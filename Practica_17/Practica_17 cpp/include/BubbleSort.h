#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "ISortStrategy.h"

class BubbleSort : public ISortStrategy {
public:
    std::vector<int> sort(const std::vector<int>& data) override;
};

#endif