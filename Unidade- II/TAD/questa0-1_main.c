#include <stdio.h>
#include <stdlib.h>
#include "questao1.c"

int main(void){
    int n;
    printf("Quantos ingressos deseja cadastrar: ");
    scanf("%d", &n);
    Ingresso *ingressos = malloc(n * sizeof(Ingresso));
    if(ingressos == NULL){
        printf("Erro de alocação!");
        exit(1);
    }

    for(int i = 0; i < n; i++){
        preenche(&ingressos[i]);
    }

    imprima(ingressos, n);

    altera_preco_especifico(n, ingressos);

    menor_e_maior_valor(n, ingressos);

    free(ingressos);

    return 0;
}