#include "OrdenadorQuick.h"
#include <iostream>

using namespace std;

// ENTEROS
int OrdenadorQuick::partitionInt(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void OrdenadorQuick::quickSortInt(int arr[], int low, int high) {
    if(low < high) {
        int pi = partitionInt(arr, low, high);
        quickSortInt(arr, low, pi-1);
        quickSortInt(arr, pi+1, high);
    }
}

void OrdenadorQuick::ordenarEnteros(int arr[], int n) {
    quickSortInt(arr, 0, n-1);
}

// CARACTERES
int OrdenadorQuick::partitionChar(char arr[], int low, int high) {
    char pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void OrdenadorQuick::quickSortChar(char arr[], int low, int high) {
    if(low < high) {
        int pi = partitionChar(arr, low, high);
        quickSortChar(arr, low, pi-1);
        quickSortChar(arr, pi+1, high);
    }
}

void OrdenadorQuick::ordenarCaracteres(char arr[], int n) {
    quickSortChar(arr, 0, n-1);
}

// PERSONAS
void OrdenadorQuick::ordenarPersonas(Persona arr[], int n) {
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i].edad > arr[j].edad)
                swap(arr[i], arr[j]);
}