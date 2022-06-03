#include "lista05.h"

int main(void){
    int *vetor, qtd;

    puts("*** Normalização de vetores ***");
    puts("Digite o tamanho do vetor");
    scanf("%d", &qtd);

    puts("gerando vetores...");
    gerarElementos(vetor, qtd);

    imprimindoVetor(vetor, qtd);

    puts("Identificando menor e maior elemento...");
    ordenandoVetorDecrescente(vetor, qtd);

    imprimindoVetor(vetor, qtd);

    puts("Normalizando vetor...");
    normalizaVetor(vetor, *(vetor+qtd-1), *(vetor), qtd );

    imprimindoVetor(vetor, qtd);

    return 0;
}