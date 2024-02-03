/*Faça um programa em C que solicita ao usuário informações de funcionários via teclado. As in-
formações digitadas pelo o usuário são: id, nome e salário do funcionário. Armazene as informações
digitadas pelo usuário em um arquivo texto.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int id;
    char nome[50];
    float salario;

    FILE *Entrada = fopen("entrada_1.txt", "wt");
    if(Entrada == NULL){
        printf("Erro na criação do arquivo .txt! \n");
        exit(1);
    }
    printf("Informe o ID do funcionário: ");
    scanf("%d", &id);
    fprintf(Entrada, "ID: %d\n", id);
    printf("Informe o nome do funcionário: ");
    scanf("%s", nome);
    fprintf(Entrada, "Nome: %s\n", nome);
    printf("Informe o salário: ");
    scanf("%f", &salario);
    fprintf(Entrada, "Salário: %.2f\n", salario);

    fclose(Entrada);
    return 0;
}
