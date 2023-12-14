// 1) Quais serão os valores de x, y e p ao final do trecho de código abaixo:

#include <stdio.h>

int main(void){
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;

    printf("%p", p);

    return 0;
}

/*
RESPOSTA:
 - A variável X é inicializada com o conteúdo do pnteiro "p" e depois é atribuido o valor 4, na linha 10,
 contudo, seu resultado final será 3 por que é retirado uma unidade na linha 12;
 
 - A variável y é inicializada com o valor 0, e na linha 8 é lida pelo ponteiro "p", contudo, na linha 11
 o conteúdo do endereço para onde "p" aponta (no caso y) é incrementado em 1. Logo, y passa a ser 1;

 - O ponteiro "p" por fim vai apontar para o endereço para o qual aponta, no caso y;
*/