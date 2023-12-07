/*
Questão 2) Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N
questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de
questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de
10 alunos matriculados. Calcule e mostre:
a) a nota obtida para cada aluno;
b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Vamos começar com a declaração das minhas variáveis
    int alunos, i, j, aprovados = 0, prova;
    float media_final = 6.0, media_aprovacao = 0.0;

    printf("Informe a quantidade de questoes da prova: \n"); // Solicito a quantidade de questões que terá a prova
    scanf("%d", &prova);

    char * gabarito = (char*) malloc(prova*sizeof(char)); //Faço a alocação de memória para o vetor gabarito
    if(gabarito == NULL){ //Verifico se não houve erro na minha alocação
        printf("Erro de alocacao! \n");
        exit(1);
    }

    printf("Informe o gabarito final da prova (v/f) ou (s/n): \n");
    for(i = 0; i < prova; i++){
        scanf(" %c", &gabarito[i]); //Faço o preenchimento do meu vetor gabarito
    }

    printf("Quantas provas iremos corrijir: \n");
    scanf("%d", &alunos); //Solicito a informação de quantas provas serão corrijidas pela minha API

    for(i = 0; i < alunos; i++){
        char * respostas = (char*) malloc(prova*sizeof(char)); //Aloco memória para um vetor que irá armazenar as respostas dos alunos
        if(respostas == NULL){
            printf("Erro de alocacao!");
            exit(1);
        }

        float nota = 0.0; //declarei e incializei a variável nota

        printf("Informe o gabarito do aluno (v/f) ou (s/n) %d \n", i+1);
        for(j = 0; j < prova; j++){
            scanf(" %c", &respostas[j]); //Faço o preenchimento do meu vetor respostas

            if(gabarito[j] == respostas[j]){ //Aqui eu confiro se as respostas batem e atribuo a nota
                nota += 10.0/prova;
            }
        }
        printf("A nota do aluno %d : %.1f\n", i+1, nota); //Aqui eu exibo a nota do aluno
        if(nota > media_final){
            aprovados++; //Contabilizando o número de aprovações 
        }

        free(respostas); //Limpo o espaço de memória reservada para o vetor respostas
    }

    media_aprovacao = ((float) aprovados/alunos)*100; //Cálculo da média
    //O float é para fazer com que a variável seja do tipo float

    printf("Das provas analisadas o total de alunos aprovados foram: %.0f%%", media_aprovacao);
    //Exibição do número de aprovados

    free(gabarito);//Limpo o espaço de memória reservado para o vetor gabarito

    return 0;
}