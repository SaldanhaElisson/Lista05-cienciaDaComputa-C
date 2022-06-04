#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void normalizaVetor(int *const vetor, const int valorMax, const int valorMin, const int qtd)
{
    for(int i = 0; i < qtd; i++){
        // formula para a normalização do vetor
        *(vetor + i ) = (*(vetor + i) - valorMin) / (valorMax - valorMin);
    }   
}

void imprimindoVetor(const int *const vetor, const int qtd){
    printf("[");
    for(int i = 0; i < qtd; i++){
        printf("%d, ", *(vetor+i));
    }

    printf(" ] \n");
}