#include "Sorts.h"

Sorts::Sorts(){

}

Sorts::~Sorts(){

}

void Sorts::quickSort(vector<TikTokData> dados, int lowIndex, int highIndex) {

}

void routine(void *a)
{
    int n = *(int *) a;

    Sleep(n);

}

void Sorts::sleepSort(vector<TikTokData> dados, int n) {

    HANDLE threads[n];

    // Create the threads for each of the input array elements
    for (int i = 0; i < n; i++)
        threads[i] = (HANDLE)_beginthread(&routine, 0,  &dados[i]);

    // Process these threads
    WaitForMultipleObjects(n, threads, TRUE, INFINITE);
}
