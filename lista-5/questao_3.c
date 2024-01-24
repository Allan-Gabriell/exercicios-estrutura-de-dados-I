/*Questão 3) Defina estruturas para representar retângulos (dadas a base e a altura) e círculos (dado o raio), e
implemente as funções a seguir:
a) Dado um círculo, crie e retorne o maior retângulo circunscrito de altura h. Considere que h é menor do
que o diâmetro do círculo.
Protótipo: Ret* ret_circunscrito(Circ* c, float h);
b) Dado um retângulo, crie e retorne o maior círculo interno ao retângulo.
Protótipo: Circ* circ_interno(Ret* r);*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct retangulo{
    float base;
    float altura; 
}Ret;

typedef struct circulo{
    float raio;
}Circ;

Ret* ret_circunscrito(Circ *c, float h){
    Ret * r = (Ret*) malloc(sizeof(Ret));
    if(r == NULL){
        printf("Erro na alocacao!\n");
        exit(1);
    }
    r->altura = h;
    r->base =  2 * sqrt((c->raio) * (c->raio) - (h/2) * (h/2));
    return r;
}

Circ* circ_interno(Ret* r) {
    Circ* c = (Circ*) malloc(sizeof(Circ));
        if(c == NULL){
        printf("Erro na alocacao!\n");
        exit(1);
    }
    c->raio = (r->base < r->altura) ? r->base / 2 : r->altura / 2;
    return c;
}

int main(void){
    Circ c;
    printf("Informe o raio do círculo: ");
    scanf("%f", &(c.raio));

    float h;
    printf("Informe a altura do retângulo: ");
    scanf("%f", &h);

    Ret* r = ret_circunscrito(&c, h);
    printf("Retângulo circunscrito: base = %.2f, altura = %.2f\n", r->base, r->altura);

    Circ* c2 = circ_interno(r);
    printf("Círculo interno: raio = %.2f\n", c2->raio);

    free(r);
    free(c2);

    return 0;
}
