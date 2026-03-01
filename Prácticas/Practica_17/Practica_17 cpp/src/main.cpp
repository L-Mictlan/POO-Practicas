#include <iostream>
#include "BubbleSort.h"
#include "Sorter.h"

int main() {
    std::vector<int> data = {5, 2, 9, 1, 5, 6};

    BubbleSort bubble;
    Sorter sorter(&bubble);

    std::vector<int> sorted = sorter.sort(data);

    std::cout << "Original: ";
    for (int n : data) std::cout << n << " ";

    std::cout << "\nOrdenado: ";
    for (int n : sorted) std::cout << n << " ";

    return 0;
}