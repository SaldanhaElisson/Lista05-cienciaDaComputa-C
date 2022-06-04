/**
 * @file lista05.h
 * @author elisson saldanha (elissonsaldanha19@gmail.com)
 * @brief  biblioteca para lista de exercicios 05 do curso C.C cadeira laboratorio de programação
 * @version 0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __LISTA05_H_
#define __LISTA05_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenandoVetorDecrescente(int *const vetor, const int qtd);
void gerarElementos(int *const vetor, const int qtd);
void normalizaVetor(int *const vetor, const int valorMax, const int valorMin, const int qtd);
void imprimindoVetor(const int *const vetor, const int qtd);

void gerarDecimaisVetores(float *const vetor, const int qtd);
float somaDosElementosVetores(float *const vetor, const int qtd);

void mediana(const int qtd);
void media( const int *const vetor, const int qtd);
// void moda( const int * const vetor, const int qtd, const int maiorElemento);

#endif // __LISTA05_H_