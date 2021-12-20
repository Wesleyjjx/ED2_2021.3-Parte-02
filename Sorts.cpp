#include "Sorts.h"

Sorts::Sorts(){

}

Sorts::~Sorts(){

}

int Sorts::partitionQuickSort(vector<TikTokData> data, int lowIndex, int highIndex, SortData *info) {

    int i = lowIndex;
    int j = highIndex;
    int pivot = data[(lowIndex + highIndex)/2].getUpVotes();

      do {
        info->addCompCount();
        while(data[i].getUpVotes() < pivot) {
            i++;
            info->addCompCount();
        }

        info->addCompCount();
        while(data[j].getUpVotes() > pivot)
        {
            j--;
            info->addCompCount();
        }

        if(i <= j)
        {
            swap(data[i],data[j]);
            info->addMoveCount();
            i++;
            j--;
        }

    }while (i <= j);

    return i;

}

void Sorts::quickSort(vector<TikTokData> &data, int lowIndex, int highIndex, SortData *info) {
    if(highIndex - lowIndex > 0) {
        int middl = partitionQuickSort(data, lowIndex, highIndex, info);
        quickSort(data, lowIndex, middl - 1, info);
        quickSort(data, middl, highIndex, info);
    }
}


void Sorts::countingSort(vector<TikTokData> dados, int n) {

}
