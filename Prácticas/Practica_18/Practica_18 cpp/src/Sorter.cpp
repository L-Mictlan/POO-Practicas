#include "Sorter.h"

Sorter::Sorter(ISortStrategy* strategy) : strategy(strategy) {}

std::vector<int> Sorter::sort(const std::vector<int>& data) {
    return strategy->sort(data);
}