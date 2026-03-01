#include <iostream>
#include "QuickSort.h"
#include "Sorter.h"

int main() {
    std::vector<int> data = {8, 3, 1, 7, 0, 10, 2};

    QuickSort quickSort;
    Sorter sorter(&quickSort);

    std::vector<int> sorted = sorter.sort(data);

    std::cout << "Original: ";
    for (int n : data) std::cout << n << " ";

    std::cout << "\nOrdenado: ";
    for (int n : sorted) std::cout << n << " ";

    return 0;
}