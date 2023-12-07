/*
Questão 1) Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um
novo produto. Um número N de pessoas de ambos os sexos foi entrevistado, e o questionário
consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opinião sobre o
produto (gostou/não gostou). Escreva um programa em C que:
    a) leia as respostas contidas no questionário e armazene-as em dois arrays vinculados,
    um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta
    para a segunda pergunta.
    b) determine a porcentagem de pessoas do sexo feminino que responderam que
    gostaram do produto.
    c) determine a porcentagem de pessoas do sexo masculino que responderam que não
    gostaram do produto.
*/

#include <stdio.h>
#include <stdlib.h>

void porcentagem (char * questao1, char * questao2, int entrevistas, float *porcentF, float *porcentM){
    float contM = 0;
    float contMG = 0;
    float contF = 0;
    float contFN = 0;

    for(int i = 0; i < entrevistas; i++){
        if(questao1[i] == 'M' || questao1[i] == 'm'){
            contM++;
            if(questao2[i] == 'N' || questao2[i] == 'n'){
                contMG++;
            }
        } else if(questao1[i] == 'F' || questao1[i] == 'f'){
            contF++;
            if(questao2[i] == 'S' || questao2[i] == 's'){
                contFN++;
            }
        }
    }

    *porcentF = (float) (contFN/contF) *100;
    *porcentM = (float) (contMG/contM) * 100;
}

int main(void){
    int entrevistas, n;

    printf("Quantos entrevistados teremos?\n");
    scanf("%d", &entrevistas);

    char * questao1 = (char*) malloc(entrevistas*sizeof(char));
    char * questao2 = (char*) malloc(entrevistas*sizeof(char));

    if(questao1 == NULL || questao2 == NULL){
        printf("Erro de alocacao de memoria! \n");
        exit(1);
    }

    for(n = 0; n < entrevistas; n++){
        printf("Questao 1 - Qual o seu sexo? (M/F)\n");
        scanf(" %c", &questao1[n]);
        printf("Questao 2 - voce gostou do nosso produto? (S/N)\n");
        scanf(" %c", &questao2[n]);
    }  

    float porcentF, porcentM;
    porcentagem(questao1, questao2, entrevistas, &porcentF, &porcentM);
    printf("A porcentagem de mulheres que gostaram do produto é: %.0f%%\n", porcentF);
    printf("A porcentagem de homens que não gostaram do produto é: %.0f%%\n", porcentM);
    printf("ApI finalizada");

    free(questao1);
    free(questao2);

    return 0;
}