/*Escreva um programa que implementa uma struct Pessoa com os campos nome, idade e gênero. O
gênero deve ser armazenado como um enum com os valores MASCULINO e FEMININO. O programa
deve ler os dados de uma pessoa e imprimir os dados da pessoa.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum genero{
    MASCULINO,
    FEMININO
} Genero;

typedef struct pessoa{
    char nome[20];
    int idade;
    Genero gener;
} Pessoa;

void cadastro_pessoa(Pessoa *p){
    printf("=== Cadastro de Pessoas ===\n");
    printf("Informe o nome: ");
    scanf("%[^\n]", p->nome);
    printf("Informe a idade: ");
    scanf("%d", &p->idade);
    printf("Informe 0 para MASCULINO e 1 para FEMININO: ");
    scanf("%d", &p->gener);
}

void imprime(Pessoa *p){
    printf("Dados cadastrados: \n");
    printf("Nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);
    //Operador ternário
    // condição ? "se verdade" : "caso contrário"
    printf("Genero: %s\n", p->gener == MASCULINO ? "Masculino" : "Feminino");
}

int main(void){
    Pessoa *pessoa = malloc(sizeof(Pessoa));
    cadastro_pessoa(pessoa);
    imprime(pessoa);

    return 0;
}