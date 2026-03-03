#ifndef ORDENADORMERGE_H
#define ORDENADORMERGE_H

class OrdenadorMerge {
private:
    void merge(int arr[], int index[], int l, int m, int r);
    void mergeSort(int arr[], int index[], int l, int r);

public:
    void ordenar(int arr[], int n);
};

#endif