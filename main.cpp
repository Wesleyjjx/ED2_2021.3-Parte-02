#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <process.h>
#include <fstream>
#include <time.h>
#include <vector>
#include <string>
#include "SortData.h"
#include "moduloteste.h"
#include "TikTokData.h"
#include "Sorts.h"

using namespace std;

void printArray(int a[], int n)
{
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << a[i] << "}" << endl;
        }
        else
        {
            cout << a[i] << ", ";
        }
    }
}

int main()
{
    std::vector<TikTokData> dados;
    vector<TikTokData> t;
    int i;
    cout << "[1] ordenacao" << endl << "[2] Hash" << endl << "[3] Modulo de teste"<< endl ;
    cin >> i;
    for(int j=0; j<100 ; j++)
    {
        srand(time(NULL));
        int a = rand()%3500000;
        t.at(j).setId(dados.at(a).getId());
        t.at(j).setReview(dados.at(a).getReview());
        t.at(j).setUpVotes(dados.at(a).getUpVotes());
        t.at(j).setAppVersion(dados.at(a).getAppVersion());
        t.at(j).setPostDate(dados.at(a).getPostDate());

    }
    if(i==1)
    {
        Sorts *ord= new Sorts();
        ord->quickSort(dados,a,b,c);
        ord->heapSort(dados);
        ord->quickSort(dados,n);
    }
    else if(i==2)
    {
        int m;
        cout<< "Digite a quantidade das versoes mais frequentes:" << endl;
        cin>>m;
        hash *version = new Hash;
        version->versions(dados,dados.size(),m);

    }
    else if(i==3)
    {
        Sorts *ordTeste= new Sorts();
        hash *version1 = new Hash;
        ofstream arquivotxt;
        arquivotxt.open("teste.txt",ios::binary);
        if (!arquivotxt.is_open())
        {
            cout << " ERRO: Arquivo nao aberto. " << endl;
            return  1 ;
        }
        arquivotxt<<ordTeste->quickSort(t,0,99)<< endl;
        arquivotxt<<ordTeste->heapSort(t)<< endl;
        arquivotxt<<ordTeste->quickSort(t,100)<< endl;
        arquivotxt<<version1->versions(dados,dados.size(),m);

        arquivotxt.close();
    }
    else
        cout<<"operacao invalida"<<endl;

    delete[] ord;
    delete[] ordTeste;
    delete[] version;
    delete[] version1;
    return 0;
}


