#include "lista05.h"

int main(int argc, char *argv[]){
    float *vetor, somaTotal;
    int qtd;

    // alocando memoria do vetor
    qtd = atoi(argv[1]);
    vetor = calloc(qtd, sizeof(float));

    puts("gerando elementos...");
    gerarDecimaisVetores(vetor, qtd);

    puts("somando Elementos...");
    somaTotal = somaDosElementosVetores(vetor, qtd);

    printf("%.2f", somaTotal);

    return 0;
}