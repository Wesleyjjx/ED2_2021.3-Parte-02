#ifndef MODULOTESTE_H_INCLUDED
#define MODULOTESTE_H_INCLUDED

#include <vector>

#include "TikTokData.h"

class moduloteste
{
    public:

       moduloteste();

       ~moduloteste();


       void acessaRegistro(int i, std::vector<TikTokData> dados);

       void testeImportacao(std::vector<TikTokData> dados);

};

#endif // MODULOTESTE_H_INCLUDED
