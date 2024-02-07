#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *Arquivo = fopen("funcionario.txt", "rt");
    if(Arquivo == NULL){
        printf("Erro na leitura do arquivo .txt! \n");
        exit(1);
    }

    fclose(Arquivo);

    return 0;
}