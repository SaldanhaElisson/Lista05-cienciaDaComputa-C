#include "lista05.h"

void mediana(const int qtd)
{   
    float medianaValue = 0;
    // se o numero for par
    if(!(qtd % 2)){
        medianaValue = ((qtd / 2) + (qtd/2 - 1))/2;
        printf(" MEDIANA: %.2f", medianaValue);
        return;
    }
    // se a quantidade for impar
    medianaValue = qtd/2 + 1;
    printf("MEDIANA: %.2f \n", medianaValue);
    return;
}

void media( const int *const vetor, const int qtd){
    float mediaValue = 0;

    for(int i = 0; i < qtd; i++){
        mediaValue += *(vetor+i);
    }
    printf(" MEDIA: %.2f \n", (mediaValue/qtd)); 
}

// void moda ( const int *const vetor, const int qtd, const int maiorElemento){
//     int *vetorOcor;

//     vetorOcor = calloc(maiorElemento, sizeof(int));
    
//     // fazendo ocorrências
//     for(int i = 0; i < qtd; i++ )
//     {
//         ++*(vetorOcor + (*(vetor + i)));
//     }

// }