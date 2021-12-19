#ifndef SORTS_H_INCLUDED
#define SORTS_H_INCLUDED

#include <iostream>
#include <vector>
#include <chrono>
#include <cstdio>
#include <unistd.h>
#include <cstdlib>

#include "TikTokData.h"
#include "SortData.h"
#include "moduloteste.h"

class Sorts {

    private:

        int z;
        void quickSortPartition(vector<TikTokData> dados, int lowIndex, int highIndex);

    public:

        Sorts();
        ~Sorts();

        void quickSort(vector<TikTokData> dados, int lowIndex, int highIndex);
        void heapSort();
        void countingSort(vector<TikTokData> dados, int n);

};


#endif // SORTS_H_INCLUDED
