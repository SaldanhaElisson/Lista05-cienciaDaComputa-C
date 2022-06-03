#include "lista05.h"

float mediana(const int *const vetor, const int qtd)
{   
    float medianaValue = 0;
    int aux;
    // elementos de quantidade par
    if(!(qtd % 2)){
        // verificando se 
        for(int i = 0; i < qtd; i++){
            aux = 2*i+1;
            if(aux == qtd - 1){
                medianaValue = (*(vetor+i) + *(vetor + i + 1))/ 2; 
                return medianaValue;
            }
        }
       
    }

    return medianaValue;
    
}