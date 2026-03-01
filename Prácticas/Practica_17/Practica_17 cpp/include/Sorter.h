#ifndef SORTER_H
#define SORTER_H

#include "ISortStrategy.h"

class Sorter {
private:
    ISortStrategy* strategy;

public:
    Sorter(ISortStrategy* strategy);
    std::vector<int> sort(const std::vector<int>& data);
};

#endif