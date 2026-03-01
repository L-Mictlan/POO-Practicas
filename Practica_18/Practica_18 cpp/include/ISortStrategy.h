#ifndef ISORTSTRATEGY_H
#define ISORTSTRATEGY_H

#include <vector>

class ISortStrategy {
public:
    virtual std::vector<int> sort(const std::vector<int>& data) = 0;
    virtual ~ISortStrategy() = default;
};

#endif