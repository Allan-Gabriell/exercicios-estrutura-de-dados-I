/*Questão 1) Crie um tipo estruturado para armazenar dados de um ingresso. Uma estrutura deste tipo possui os
seguintes campos: preço, local e atração.
a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e
preencha seus campos com valores fornecidos pelo usuário via teclado. Protótipo: void
preenche(Ingresso* i);
b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e imprima
os valores dos seus campos. Protótipo: void imprime(Ingresso* i);
c) Escreva uma função que receba, como parâmetros, o endereço de uma estrutura do tipo Ingresso e um
novo valor de preço e atualize o preço do ingresso para o novo valor. Protótipo: void
altera_preco(Ingresso* i, float valor);
d) Escreva uma função que receba, como parâmetros, um vetor de ingressos e o tamanho do vetor e
imprima os eventos de ingresso mais barato e mais caro. Protótipo: void imprime_menor_maior_preco(int
n, Ingresso* vet);
e) Escreva uma função main para testar as funções anteriores.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct ingresso {
    float price;
    char location[30];
    char attraction[30];
}Ingresso;

void preenche(Ingresso *i){
    printf(" === Cadastro de Ingresso ===\n");
    printf("Informe o preco: ");
    scanf("%f", &i->price);
    getchar(); // Para consumir o caractere de nova linha após ler o preço
    printf("Informe o local: ");
    scanf("%[^\n]", i->location);
    getchar(); 
    printf("Informe a atracao: ");
    scanf("%[^\n]", i->attraction);
    getchar(); // Para consumir o caractere de nova linha após ler a atração
}

void imprima(Ingresso *i, int n){
    printf(" === Data Ingresso ===\n");
    for(int j = 0; j < n; j++){
        printf("Ingresso #%d\n", j+1);
        printf("Preco: %.2f\n Local: %s\n Atracao: %s\n", i[j].price, i[j].location, i[j].attraction);
    }
}

void altera_preco_especifico(int n, Ingresso *vet){
    int index;
    float novo_preco;
    printf("Informe o número do ingresso que deseja alterar o preço: ");
    scanf("%d", &index);
    getchar(); // Para consumir o caractere de nova linha após ler o índice
    printf("Informe o novo preço: ");
    scanf("%f", &novo_preco);
    getchar(); // Para consumir o caractere de nova linha após ler o novo preço
    vet[index-1].price = novo_preco;
}

void menor_e_maior_valor(int n, Ingresso *vet){
    int minIndex = 0, maxIndex = 0;
    for(int i = 0; i<n; i++){
        if(vet[i].price < vet[minIndex].price){
            minIndex = i;
        } 
        if(vet[i].price > vet[maxIndex].price){
            maxIndex = i;
        }
    }
    printf(" === Ingresso Mais Barato ===\n");
    imprima(&vet[minIndex], 1);
    printf(" === Ingresso Mais Caro ===\n");
    imprima(&vet[maxIndex], 1);
}

int main(void){
    int n;
    printf("Quantos ingressos deseja cadastrar: ");
    scanf("%d", &n);
    getchar(); // Para consumir o caractere de nova linha após ler o número de ingressos
    Ingresso *ingressos = malloc(n * sizeof(Ingresso));
    for(int i = 0; i < n; i++){
        preenche(&ingressos[i]);
    }

    imprima(ingressos, n);

    altera_preco_especifico(n, ingressos);

    menor_e_maior_valor(n, ingressos);

    free(ingressos);

    return 0;
}


