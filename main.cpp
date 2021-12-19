#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <process.h>

#include "SortData.h"
#include "moduloteste.h"
#include "TikTokData.h"
#include "Sorts.h"

using namespace std;

void printArray(int a[], int n) {
    cout << "{";
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << a[i] << "}" << endl;
        }
        else {
            cout << a[i] << ", ";
        }
    }
}

int main()
{
    // Doesn't work for negative numbers
    int arr[] = {34, 23, 122, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    Sorts c;
    std::vector<TikTokData> dados;
    //s.sleepSort(arr, n);
    return 0;
}
