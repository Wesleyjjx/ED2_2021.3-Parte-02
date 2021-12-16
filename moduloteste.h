#ifndef MODULOTESTE_H_INCLUDED
#define MODULOTESTE_H_INCLUDED

#include <vector>
#include "TikTokData.h"

class moduloteste
{
    public:
       moduloteste();
       ~moduloteste();

       void acessaRegistro(int i,vector<TikTokData> dados);
       void testeImportacao(vector<TikTokData> dados);

};

#endif // MODULOTESTE_H_INCLUDED
