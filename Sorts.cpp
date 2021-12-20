#include "Sorts.h"

Sorts::Sorts(int maxReviews){
    this->heapSortMaxReviews = maxReviews;
    this->heapSortNReviews = 0;
    this->heapSortArray = new TikTokData[this->heapSortMaxReviews];
}

Sorts::~Sorts(){

    delete this;

}

TikTokData Sorts::heapSortGetRoot() {

    if (this->heapSortNReviews > 0) {

        return this->heapSortArray[0];

    }
    else {

        cout << "no momento a Heap se encontra vazia" << endl;

        exit(1);

    }
}

void Sorts::heapSortInsert(TikTokData d, SortData *info) {

    if(this->heapSortNReviews < this->heapSortMaxReviews) {

        heapSortArray[heapSortNReviews] = d;

        heapSortNReviews += 1;

        heapSortRise(heapSortArray[heapSortNReviews - 1], info);

    }
}

int Sorts::heapSortGetPositionFromElement(TikTokData d) {

    for (int i = 0; i < sizeof(heapSortArray); i++) {

        if(&heapSortArray[i].getUpVotes == &d.getUpVotes) {

            return i;

        }
    }
}

void Sorts::heapSortRise(TikTokData d, SortData *info) {

    TikTokData father = heapSortArray[(heapSortGetPositionFromElement(d) - 1)/ 2];

    if(father.getUpVotes() < d.getUpVotes()) {

        info->addCompCount();

        swap(father, d);

        info->addMoveCount();

        heapSortRise(father, info);
    }
    else {
        info->addCompCount();
    }
}


int Sorts::partitionQuickSort(vector<TikTokData> &data, int lowIndex, int highIndex, SortData *info) {

    int i = lowIndex;

    int j = highIndex;

    TikTokData pivot = data[(lowIndex + highIndex)/2];

      do {

        info->addCompCount();

        while(data[i].getUpVotes() < pivot.getUpVotes()) {

            i++;

            info->addCompCount();

        }

        info->addCompCount();

        while(data[j].getUpVotes() > pivot.getUpVotes()) {
            j--;

            info->addCompCount();

        }

        if(i <= j) {

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
