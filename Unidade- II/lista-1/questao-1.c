/*Escreva um programa em C que leia de um arquivo as notas dos alunos de uma
turma e escreva em outro arquivo o nome e a média de cada aluno, bem como a sua situação
(aprovado (média >= 7.0) ou reprovado). Tanto no arquivo de entrada quanto no de saída,
considere que os dados em cada linha estão separados por um caractere de tabulação ‘\t’. Para a
execução do programa com o arquivo de entrada “entrada_q3.txt”, deverá ser criado o arquivo
de saída “saída_q3.txt”, como ilustrado a seguir.*/

#include <stdio.h>
#include <string.h>

int main(void){
    float notaA, notaB, notaC, media=0;
    char nome[100], linha[100];

    FILE * arquivo_entrada = fopen("entrada_q3.txt", "r");
    FILE * arquivo_saida = fopen("saida_q3.txt", "w");

    if(arquivo_entrada == NULL){
        printf("Erro ao abrir/inicializar o arquivo de entrada!\n");
        return 1;
    }

    if(arquivo_saida==NULL){
        printf("Erro ao abrir/inicializar o arquivo de saída!\n"); 
        return 1; 
    }

    while(fgets(linha,100,arquivo_entrada) != NULL){
        if(sscanf(linha, "%s\t%f\t%f\t%f", nome, &notaA, &notaB, &notaC) != NULL){
            media = (notaA + notaB + notaC)/3;
            fprintf(arquivo_saida, "%s\t%.1f\t %s\n", nome, media, (media>=7.0)?"aprovado":"reprovado");
        } else {
            printf("Erro na leitura da linha: %s\n", linha);
        }
    }

    fclose(arquivo_entrada);
    fclose(arquivo_saida);

    return 0;
}
