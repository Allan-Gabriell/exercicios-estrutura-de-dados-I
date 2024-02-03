/*Implemente um programa em C para ler o nome e as notas de um número N de alunos e armazená-los
em um arquivo*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int number;
    printf("Quantos alunos deseja cadastrar as notas? ");
    scanf("%d", &number);

    char nome[number][50];
    float notas[number][3];

    FILE *Entrada = fopen("alunos.txt", "wt");
    if(Entrada == NULL){
        printf("Erro na criação do arquivo .txt! \n");
        exit(1);
    }

    for(int i = 0; i < number; i++){
        printf("Informe o nome do aluno #%d: ", i+1);
        scanf("%s", nome[i]);
        fprintf(Entrada, "%s ", nome[i]);
        for(int j = 0; j < 3; j++){
            printf("Informe a nota #%d do aluno %s: ", j+1, nome[i]);
            scanf("%f", &notas[i][j]);
            fprintf(Entrada, "%.2f ", notas[i][j]);
        }
        fprintf(Entrada, "\n");
    }

    fclose(Entrada);
    return 0;
}


