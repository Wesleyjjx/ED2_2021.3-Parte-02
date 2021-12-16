#ifndef SORTS_H_INCLUDED
#define SORTS_H_INCLUDED

#include <iostream>
#include <vector>
#include "TikTokData.h"
#include "SortData.h"

class Sorts {

    private:

        int z;

    public:

        Sorts();
        ~Sorts();

        void quickSort();
        void heapSort();
        void sleepSort();

};


#endif // SORTS_H_INCLUDED
