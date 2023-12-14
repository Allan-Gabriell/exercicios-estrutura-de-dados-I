/*4) Crie um programa para calcular a área e o perímetro de um hexágono. O seu
programa deve implementar uma função chamada calcula_hexagono que calcula a área e o
perímetro de um hexágono regular de lado l. A função deve obedecer ao seguinte protótipo:
void calcula_hexagono(float l, float *area, float *perimetro); A área e o perímetro de um
hexágono regular são dados, respectivamente, por:

            (IMAGEM DO FÓRMULA NA PÁGINA DA ATIVIDADE)

Obs: Para os cálculos, utilize as funções sqrt e pow do módulo math da biblioteca 
padrão de C. Em seguida, crie a função principal do programa e utilize a função 
calcula_hexagono para calcular a área e o perímetro de um hexágono de lado l 
informado pelo usuário. */

#include <stdio.h>
#include <math.h>
#include <locale.h>

void calcula_hexagono(float l, float *area, float *perimetro){
    *area = (3*pow(l, 2)*(sqrt(3)))/2;

    *perimetro = l*6;
}

int main(void) {
    float l;
    float *area;
    float *perimetro;
    float area_final;
    float perimetro_final;

    area = &area_final;
    perimetro = &perimetro_final;

    setlocale(LC_ALL, "portuguese");

    printf("Por favor informe o lado para podermos calcular a área e perímetro do hexágono que desejas: \n");
    scanf("%f", &l);
    
    calcula_hexagono(l, area, perimetro);

    printf("A área do hexágo é: %.2f unidades quadradas\n", area_final);
    printf("O perímetro do hexágono é: %.2f unidades\n ", perimetro_final);

    return 0;
}