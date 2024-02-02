/*Questão 2) Escreva um programa em C que preencha um vetor de 10 inteiros com informações
vindas de um arquivo e escreva em outro arquivo o menor elemento, o maior elemento, bem
como a média dos elementos do vetor, como ilustrado a seguir. */

#include <stdio.h>
#include <string.h>

int main(void){
    float media;
    int cont = 0, Min_num = 0, Max_num = 0, soma = 0, vect[10], num;
    FILE *Entrada = fopen("arquivo_de_entrada.txt", "rt");
    FILE *Saida = fopen("arquivo_de_saida.txt", "wt");

    if(Entrada == NULL){
        printf("Erro ao abrir o arquivo de entrada!\n");
        exit(1);
    }

    if(Saida == NULL){
        printf("Erro ao abrir o arquivo de saída!\n");
        exit(1);
    }

    for(int i =0; i<10; i++){
        if(fscanf(Entrada, "%d\n", &num) == NULL){
            printf("Erro na leitura do arquivo de entrada! \n");
            return 1;
        }
        vect[i] = num;
        soma += num;
        if( i == 0){
            Min_num = num;
            Max_num = num;
        } else{
            if(num < Min_num){
                Min_num = num;
            }
            if(num > Max_num){
                Max_num = num;
            }
        }
    }

    media = (float) soma / 10;

    fprintf(Saida, "Menor número: %d\n", Min_num);
    fprintf(Saida, "Maior número: %d\n", Max_num);
    fprintf(Saida, "Média: %.2f\n", media);

    fclose(Entrada);
    fclose(Saida);

    return 0;
}
