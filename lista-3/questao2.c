#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct{
    char nome[50];
    int CPF[11];
    int idade;
}Pessoa;

void preencha(Pessoa *pessoa, int quantidade){
    int i;

    for(i = 0; i < quantidade; i++){
        printf("Informe o nome da pessoa %d: \n", i+1);
        scanf(" %[^\n]", pessoa[i].nome);
        printf("Informe o CPF: \n");
        scanf("%d", &pessoa[i].CPF);
        printf("Informe a idade: \n");
        scanf("%d", &pessoa[i].idade);
        system("cls");
    }
}

void imprima(Pessoa *pessoa, int quantidade){
    int i;

    for(i = 0; i < quantidade; i++){
        printf("Dados cadastrados da pessoa %d: \n", i+1);
        printf("Nome: %s\nCPF: %d\nIdade: %d\n", pessoa[i].nome, pessoa[i].CPF, pessoa[i].idade);
    }
}

void alteracao(Pessoa *pessoa, int quantidade){
    int i;

    printf("Qual o numero da pessoa que quer atualizar: \n");
    scanf("%d", &i);
    printf("Informe a nova idade: \n");
    scanf("%d", &pessoa[i-1].idade);
}

void comparar_idade(Pessoa *pessoa, int quantidade){
    int i, menor_idade = 0, maior_idade = 0;

    for(i = 0; i < quantidade; i++){
        if(pessoa[i].idade > pessoa[maior_idade].idade){
            maior_idade = i;
        }
        if(pessoa[i].idade < pessoa[menor_idade].idade){
            menor_idade = i;
        }
    }
    system("cls");

    printf("Comparacao realizada com sucesso: \n");
    printf("A maior idade e do %s com %d anos! \n", pessoa[maior_idade].nome, pessoa[maior_idade].idade);
    printf("A menor idade e do %s com %d anos! \n", pessoa[menor_idade].nome, pessoa[menor_idade].idade);
}

int main(void){
    int quantidade;

    Pessoa *pessoa = (Pessoa*)malloc(quantidade*sizeof(Pessoa));
    if(pessoa == NULL){
        exit(1);
    }

    printf("Quantas pessoas iremos cadastrar: \n");
    scanf("%d", &quantidade);

    preencha(pessoa, quantidade);
    imprima(pessoa, quantidade);
    alteracao(pessoa, quantidade);
    imprima(pessoa, quantidade);
    comparar_idade(pessoa, quantidade);

    free(pessoa);

    return 0;
}

/*
Crie um tipo estruturado para armazenar dados de uma pessoa. Uma estrutura deste tipo possui os
seguintes campos: nome da pessoa, numero do documento e idade.
a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Pessoa e
preencha seus campos com valores fornecidos pelo usuário via teclado.
b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Pessoa e
imprima os valores dos seus campos.
c) Implemente uma função para realizar uma atualização da idade de uma estrutura do tipo Pessoa.
d) Escreva uma função que receba como parâmetro um vetor de estruturas do tipo Pessoa e imprima
o nome da Pessoa mais velha e mais nova.
*/