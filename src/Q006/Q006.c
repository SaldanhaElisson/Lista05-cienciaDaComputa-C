#include "lista05.h"


int main(){
    int qtd, *vetor;
    
    puts("Digite a quantidade de vetor");
    scanf("%d", &qtd); 

    gerarElementos(vetor, qtd);
    imprimindoVetor(vetor, qtd);
    ordenandoVetorDecrescente(vetor, qtd);

    media(vetor, qtd);
    mediana(qtd);
    // moda(vetor, qtd, *(vetor));
    return 0;
}