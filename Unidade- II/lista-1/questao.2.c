/*Questão 2) Escreva um programa em C que preencha um vetor de 10 inteiros com informações
vindas de um arquivo e escreva em outro arquivo o menor elemento, o maior elemento, bem
como a média dos elementos do vetor, como ilustrado a seguir. */

#include <stdio.h>
#include <string.h>

int main(void){
    float media;
    int cont = 0, Min_num = 0, Max_num = 0, soma = 0, vect[10], num; //declarei mminhas variáveis e o meu vetor de 10 posições
    FILE *Entrada = fopen("arquivo_de_entrada.txt", "rt"); //Crio meu arquivo de leitura 
    FILE *Saida = fopen("arquivo_de_saida.txt", "wt"); //Crio meu arquivo de escrita

    if(Entrada == NULL){ //Verifico se ocorreu tudo certo na criação do meu arquivo de entrada
        printf("Erro ao abrir o arquivo de entrada!\n");
        exit(1);
    }

    if(Saida == NULL){ //Verifico se ocorreu tudo certo na criação do meu arquivo de saida
        printf("Erro ao abrir o arquivo de saída!\n");
        exit(1);
    }

    for(int i =0; i<10; i++){ //Crio um loop de 10 repetições
        if(fscanf(Entrada, "%d\n", &num) == NULL){ //Verifico se eu tenho algo para ler no meu arquivo de entrada
            printf("Erro na leitura do arquivo de entrada! \n");
            return 1;
        }
        vect[i] = num; //Pego o valor de num e atribuo a vect na posição i
        soma += num; //Realizo a somatória dos valores
        if( i == 0){ //Crio um if para atribuir valores iniciais a i para Max_num e Min_num
            Min_num = num;
            Max_num = num;
        } else{ //Nesse else eu faço eu realizo a busca pelo maior e o menor valor do arquivo de entrada
            if(num < Min_num){
                Min_num = num;
            }
            if(num > Max_num){
                Max_num = num;
            }
        }
    }

    media = (float) soma / 10; // realizo o cálculo da média e forço para que seja um retorno do tipo float e armazeno em media

    //Escrevo no meu arquivo de saída os dados que desejo
    fprintf(Saida, "Menor número: %d\n", Min_num);
    fprintf(Saida, "Maior número: %d\n", Max_num);
    fprintf(Saida, "Média: %.2f\n", media);

    fclose(Entrada);
    fclose(Saida);

    return 0;
}
