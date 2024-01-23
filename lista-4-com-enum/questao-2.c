/*Escreva um programa que implementa uma struct Produto com os campos nome, preço e tipo. O
tipo deve ser armazenado como uma union que armazena um dos tipos: ALIMENTO, BEBIDA ou
ELETRONICO. O programa deve ler os dados de um produto e imprimir os dados do produto.*/

#include <stdio.h>
#include <stdlib.h>

typedef enum tipo{
    ALIMENTO = 1,
    BEBIDA,
    ELETRONICO
} Tipo;

typedef struct produto{
    char nome[20];
    float preco;
    Tipo tipe;
} Produto;

void cadastro_pessoa(Produto *p){
    int opcao;
    printf("=== Cadastro de Produto ===\n");
    printf("Informe o nome: ");
    scanf("%[^\n]", p->nome);
    printf("Informe o preço: ");
    scanf("%f", &p->preco);
    printf("Informe o tipo 1 Alimento, 2 Bebida, 3 Eletronico: ");
    scanf("%d", &opcao);
    p->tipe = opcao;
}

void imprime(Produto *p){
    printf("Dados cadastrados: \n");
    printf("Nome: %s\n", p->nome);
    printf("Idade: %.2f\n", p->preco);
    printf("Tipo: %s\n", p->tipe == ALIMENTO ? "Alimento" : p->tipe == BEBIDA ? "Bebida" : "Eletronico");
}

int main(void){
    Produto *produto = malloc(sizeof(Produto));
    cadastro_pessoa(produto);
    imprime(produto);

    free(produto);

    return 0;
}