#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct {
    char nome[50];
    float salario;
    int identificador;
    char cargo[50];
} Funcionario;

void preencher(Funcionario *funcionario, int quantidade){
    int n;
    for(n = 0; n < quantidade; n++){
        printf("Informe o nome do funcionario %d: \n", n+1);
        scanf(" %[^\n]", funcionario[n].nome);
        printf("Informe o cargo: \n");
        scanf(" %[^\n]", funcionario[n].cargo);
        printf("Informe o identificador desse funcionario (numero de no maximo 5 digitos): \n");
        scanf("%d", &funcionario[n].identificador);
        printf("Informe o salario: \n");
        scanf("%f", &funcionario[n].salario);
        system("cls");
    }
}

void imprima (Funcionario *funcionario, int quantidade){
    int n;
    for(n = 0; n < quantidade; n++){
        printf("Dados cadastrados do funcionario %d: \n", n+1);
        printf("Nome: %s\nCargo: %s\nIdentificador: %d\nSalario: %.2f\n", funcionario[n].nome, 
        funcionario[n].cargo, funcionario[n].identificador, funcionario[n].salario);
    }
}

void modificar (Funcionario *funcionario, int quantidade){
    int n;
    printf("Informe o numero do funcionario que deseja modificar o salario: \n");
    scanf("%d", &n);
    printf("Informe o novo salario: \n");
    scanf("%f", &funcionario[n-1].salario);
}

void comparar(Funcionario *funcionario, int quantidade){
    int n, maior_sal = 0, menor_sal = 0;
    for(n = 0; n < quantidade; n++){
        if(funcionario[n].salario > funcionario[maior_sal].salario){
            maior_sal = n;
        }
        if(funcionario[n].salario < funcionario[menor_sal].salario){
            menor_sal = n;
        }
    }
    system("cls");
    printf("Funcionario de maior salario: \n");
    printf("Cargo: %s\nSalario: %.2f\n", funcionario[maior_sal].cargo, funcionario[maior_sal].salario);
    printf("Funcionario de menor salario: \n");
    printf("Cargo: %s\nSalario: %.2f\n", funcionario[menor_sal].nome, funcionario[menor_sal].salario);
}

int main(void){
    int quantidade;
    printf("Quantos funcionarios iremos cadastras: \n");
    scanf("%d", &quantidade);

    Funcionario *funcionario = (Funcionario*) malloc(quantidade*sizeof(Funcionario));
    if(funcionario == NULL){
        exit(1);
    }

    preencher(funcionario, quantidade);
    imprima(funcionario, quantidade);
    modificar(funcionario, quantidade);
    imprima(funcionario, quantidade);
    comparar(funcionario, quantidade);
    free(funcionario);

    return 0;
}



/*
Crie um tipo estruturado para armazenar dados de um funcionário. Uma estrutura deste tipo possui
os seguintes campos: nome, salário, identificador e cargo.
a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Funcionario
e preencha seus campos com valores fornecidos pelo usuário via teclado.
b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Funcionario
e imprima os valores dos seus campos.
c) Implemente uma função para realizar uma alteração no salário de uma estrutura do tipo Funcionario.
d) Escreva uma fução que receba como parâmetro um vetor de estruturas do tipo Funcionario e
imprima o cargo e salário do Funcionario com maior salário e o cargo e salário do funcionário
com o menor salário.
*/