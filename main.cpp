#include <iostream>
#include <stdlib.h>

#include "SortData.h"
#include "moduloteste.h"

using namespace std;

void printArray(int a[], int n) {
    cout << "{";
    for (int i = 0; i < n; i++) {
        if (i == n -1 ) {
            cout << a[i] << "}" << endl;
        }
        else {
            cout << a[i] << ", ";
        }
    }
}

void quickSort(int a[], int n, int i, int j, int p) {
    cout << "chegou aqui 3" << endl;
    while (i != p && j != p) {
        cout << "chegou aqui 4" << endl;
        if(a[i] > a[p] && a[j] < a[p]) {
            cout << "chegou aqui 5" << endl;
            int aux = a[i];
            a[i] = a[j];
            a[j] = aux;
            cout << "chegou aqui 6" << endl;
        }
        cout << "chegou aqui 7" << endl;
        quickSort(a, n, i + 1, j - 1, p);
    }
}

int main()
{
    ///logica do quicksort
    int n = 15;
    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }
    printArray(a, n);
    cout << "chegou aqui 1" << endl;
    int p = n % 2, i = 0, j = n - 1;
    cout << "chegou aqui 2" << endl;
    ///quickSort(a, n, i, j, p);
    printArray(a, n);
    return 0;
}
