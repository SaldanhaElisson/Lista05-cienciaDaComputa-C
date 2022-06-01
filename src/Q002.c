#include "lista05.h"

void gerarElementos(int *const, const int);
void identificandoOMenorElemento( int *const, const int);


int main(int argc, char *argv[]){
    int qtd, *vetor;

    qtd = atoi(argv[1]);

    // validando 
    if( argc != 2){
        puts("Erro, somente um argumento na linha de comando");
        exit(1);
    }

    // alocando espaço na memoria 
    vetor = calloc(qtd, sizeof(int));
    
    puts("Gerando elementos ...");
    gerarElementos( vetor, qtd);

    puts("identificando o  menor elemento");
    identificandoOMenorElemento(vetor, qtd);
    printf("%d \n", *(vetor+qtd-1));

    return 0;
}


