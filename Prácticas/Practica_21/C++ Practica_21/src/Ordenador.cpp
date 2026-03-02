#include "Ordenador.h"
#include <iostream>

void Ordenador::ordenarEnteros(int arr[], int n)
{
    int index[n];
    for(int i=0;i<n;i++)
        index[i] = i;

    quickSort(arr, index, 0, n-1);

    cout << "Orden indirecto:\n";
    for(int i=0;i<n;i++)
        cout << arr[index[i]] << " ";
}

int Ordenador::partition(int arr[], int index[], int low, int high)
{
    int pivot = arr[index[high]];
    int i = low - 1;

    for(int j=low;j<high;j++)
    {
        if(arr[index[j]] < pivot)
        {
            i++;
            swap(index[i], index[j]);
        }
    }
    swap(index[i+1], index[high]);
    return i+1;
}

void Ordenador::quickSort(int arr[], int index[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, index, low, high);
        quickSort(arr, index, low, pi-1);
        quickSort(arr, index, pi+1, high);
    }
}

void Ordenador::ordenarPersonas(Persona arr[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i].edad > arr[j].edad)
                swap(arr[i], arr[j]);
}