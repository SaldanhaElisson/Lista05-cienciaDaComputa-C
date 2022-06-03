#include "lista05.h"

void gerarDecimaisVetores(float *const vetor, const int qtd){
    srand(time(NULL));
    for(int i = 0; i < qtd; i++){
        *(vetor + i) = (float)(rand() % 100) / 10;
    }
}

float somaDosElementosVetores(float *const vetor, const int qtd){
    float somaTotal = 0;

    for(int i = 0; i < qtd; i++){
        somaTotal += *(vetor + i);
    }
    return somaTotal;
}