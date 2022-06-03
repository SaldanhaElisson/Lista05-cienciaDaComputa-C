/*Escreva um programa que receba dois valores por linha de execu ̧c ̃ao e realize a soma ou multi-
plica ̧c ̃ao, conforme um c ́odigo de opera ̧c ̃ao tamb ́em recebido por linha de execu ̧c ̃ao. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n1, n2, result;
    char op;

    // validando argumentos
    if(argc =! 4){
        puts("Erro");
        exit(1);
    }

    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);

    switch(*argv[3])
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case 'x':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    default:
        break;
    }

    printf("%d", result);

    return 0;
}