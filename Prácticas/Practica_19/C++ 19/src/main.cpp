#include <iostream>
#include "OrdenadorBurbuja.h"

using namespace std;

int main() {

    OrdenadorBurbuja o;
    int nums[5] = {8,3,6,1,9};

    o.ordenarEnteros(nums,5);

    return 0;
}