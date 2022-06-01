/**
 * @file Q002f.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void identificandoOMenorElemento(int *const vetor, const int qtd){
    int aux = 0;
    puts("aqui");
    for(int i = 0; i < qtd; i++){
        for(int a = 0; a < qtd-1; a++){
            if(*(vetor + a) > *(vetor+a+1)){
                aux = *(vetor + a);
                *(vetor + a) = *(vetor + a + 1);
                *(vetor + a + 1) = aux;
            }
        }
    }
}

void gerarElementos(int *const vetor, const int qtd){
    srand(time(NULL));
    for(int i = 0; i < qtd; i++){
        *(vetor + i) = rand() % 100;
    }
}
