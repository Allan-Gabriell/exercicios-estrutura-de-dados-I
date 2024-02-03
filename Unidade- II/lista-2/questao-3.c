/*Você foi contratado para desenvolver um programa em C que permita o cadastro de frutas e seus
preços em um arquivo de dados. O programa deve usar uma estrutura (struct) para armazenar os
detalhes de cada fruta, incluindo o nome da fruta e o preço.
O programa deve realizar as seguintes ações:
Definir uma estrutura chamada Fruta com os seguintes campos:
– nome (string) para armazenar o nome da fruta.
– preco (float) para armazenar o preço da fruta.
Permitir que o usuário insira os dados das frutas via teclado.
O usuário poderá cadastrar múltiplas frutas em uma única execução do programa. Para cada fruta,
o programa deve solicitar:
O nome da fruta.
O preço da fruta.
Após inserir os dados de cada fruta, o programa deve salvar as informações no arquivo ”frutas.txt”.
Cada linha do arquivo deve conter o nome da fruta e seu preço, separados por vı́rgula.
O programa deve continuar solicitando os dados das frutas até que o usuário decida parar.
Quando o usuário decidir parar de cadastrar frutas, o programa deve exibir uma mensagem de encer-
ramento e fechar o arquivo.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct fruta {
    char nome[30];
    float preco;
} Fruta;

int main(void){
    FILE *frutas = fopen("frutas.txt", "wt");
    if(frutas == NULL){
        printf("Erro na criação do arquivo .txt!\n");
        exit(1);
    }

    int number;
    printf("Quantas frutas você deseja cadastrar? ");
    scanf("%d", &number);

    Fruta f[number];

    for(int i = 0; i < number; i++){
        printf("Informe o nome da fruta #%d: ", i+1);
        scanf("%s", f[i].nome);
        printf("Informe o preço da fruta #%d: ", i+1);
        scanf("%f", &f[i].preco);
        fprintf(frutas, "%s,\t%.2f\n", f[i].nome, f[i].preco);
    }

    printf("Cadastro de frutas encerrado.\n");
    fclose(frutas);
    return 0;
}
