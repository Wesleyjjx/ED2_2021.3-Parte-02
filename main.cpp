#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <process.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

#include "FileReader.h"
#include "moduloteste.h"
#include "Sorts.h"
#include "SortData.h"
#include "TikTokData.h"

using namespace std;


void setSortName(std::vector<SortData> sd) {

    for (int i = 0; i < 3; i++) {

        switch(i) {

            case 0:

                sd[0].setSortName("Heap Sort");

                break;

            case 1:

                sd[1].setSortName("Quick Sort");

                break;

            case 2:

                sd[0].setSortName("Counting Sort");

                break;

            default:

                break;

        }

    }

}


int main()
{
    int n;

    FileReader f;

    moduloteste mt;

    std::string file = "tiktok_app_reviews.csv";

    vector<TikTokData> ttd;

    ttd = f.readTikTok(file);

    vector<SortData> sd();

    n = 10000;

    Sorts s(n);

    vector<TikTokData> part2;

    mt.randomImport(ttd, part2, n);

    setSortName(sd);

    n = 50000;

    n = 100000;

    n = 500000;

    n = 1000000;

    //Sorts c(n);
    std::vector<TikTokData> dados;
    return 0;
}
