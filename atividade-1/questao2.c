//2) Considere o trecho de código abaixo:
/*Se tentarmos compilar o programa (não o compile ainda), você acha que o compilador nos
fornece alguma mensagem? Se sim, responda:
a) Esta mensagem é de erro ou advertência?
b) Por que o compilador emite tal mensagem?
c) Compile e execute o programa. A execução foi bem sucedida?
d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja emitida 
pelo compilador.
e) Compile e execute novamente o programa. A execução foi bem sucedida? */

#include <stdio.h>

/*int main(void) {
    int x, *p;
    x = 100;
    p = x;
    printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
}*/

/*
RESPOSTAS:
    a) Sim, o compilador exibirar uma mensagem. E ela será uma mensagem de erro;
    b) O motivo pelo qual o compilador exibirar essa mensagem, é o fato de na linha 16, está sendo 
    atribuído o valor de x a um ponteiro, o que não é correto, visto que a função dos ponteiros é armazenar
    endereços de memória;
    c) Não, ao executar o programa o meu terminal me informa o motivo do erro e depois aborta o programa;
*/
// d) Código correto:

int main(void) {
    int x, *p;
    x = 100;
    p = &x;
    printf("Valor de p = %p\tValor de *p = %d", p, *p);
}

/*
    e) Agora sim, a execução está correta, apresentando o endereço de p e o conteúdo de p;
*/