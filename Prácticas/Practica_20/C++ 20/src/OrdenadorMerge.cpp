#include "OrdenadorMerge.h"
#include <iostream>

using namespace std;

void OrdenadorMerge::merge(int arr[], int index[], int l, int m, int r) {

    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = new int[n1];
    int *R = new int[n2];

    for(int i=0;i<n1;i++) L[i] = index[l+i];
    for(int j=0;j<n2;j++) R[j] = index[m+1+j];

    int i=0,j=0,k=l;

    while(i<n1 && j<n2) {
        if(arr[L[i]] <= arr[R[j]])
            index[k++] = L[i++];
        else
            index[k++] = R[j++];
    }

    while(i<n1) index[k++] = L[i++];
    while(j<n2) index[k++] = R[j++];

    delete[] L;
    delete[] R;
}

void OrdenadorMerge::mergeSort(int arr[], int index[], int l, int r) {
    if(l<r) {
        int m = l+(r-l)/2;
        mergeSort(arr,index,l,m);
        mergeSort(arr,index,m+1,r);
        merge(arr,index,l,m,r);
    }
}

void OrdenadorMerge::ordenar(int arr[], int n) {

    int *index = new int[n];
    for(int i=0;i<n;i++) index[i]=i;

    mergeSort(arr,index,0,n-1);

    cout << "Orden indirecto (Merge):\n";
    for(int i=0;i<n;i++)
        cout << arr[index[i]] << " ";

    delete[] index;
}