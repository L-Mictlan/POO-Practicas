#include "OrdenadorBurbuja.h"
#include <iostream>

using namespace std;

void OrdenadorBurbuja::ordenarEnteros(int arr[], int n) {

    int *index = new int[n];

    for(int i=0;i<n;i++)
        index[i] = i;

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[index[j]] > arr[index[j+1]])
                swap(index[j], index[j+1]);

    cout << "Orden indirecto (Burbuja):\n";
    for(int i=0;i<n;i++)
        cout << arr[index[i]] << " ";

    delete[] index;
}