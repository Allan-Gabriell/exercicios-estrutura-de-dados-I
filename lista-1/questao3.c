/* 3) Qual será a saída exibida pelo programa a seguir:
Observe que, se int *p é uma variável do tipo ponteiro para inteiro, então int **pp é uma 
variável do tipo ponteiro para ponteiro de inteiro, isto é, uma varável que poderá armazenar o 
endereço de um ponteiro do tipo int.  */

#include <stdio.h>
int main(void) {
 int a, b, c, d;
 int *p1;
 int *p2 = &a;
 int *p3 = &c;
 p1 = p2;
 *p2 = 10;
 b = 20;
 int **pp;
 pp = &p1;
 *p3 = **pp;
 int *p4 = &d;
 *p4 = b + (*p1)++;
 printf("%d\t%d\t%d\t%d\n", a, b, c, d);
 return 0;
}

/*
RESPOSTA

- Na linha 8, são declaradas a variáveis de tipo inteiro: a, b, c, d;
- Na linha 9, o ponteiro p1 é declarado;
- Na linha 10, o ponteiro p2 é criado e ele aponta para o endereço de a;
- Na linha 11, p3 é criado e aponta para o endereço de c;
- Na linha 12, p1 passa a apontar para o mesmo endereço que p2 aponta, no caso "a";
- Na linha 13, o conteúdo de p2, que aponta para "a", passa a ser 10;
- Na linha 14, a variável b é definida como 20;
- Na linha 15, é declarada a variável do tipo ponteiro que armazena endereço de ponteiro, pp;
- Na linha 16, "pp" passa a apontar para o endereço de p1;
- Na linha 17, "p3" recebe o valor para o qual "pp" aponta que no caso é "a". Logo, "c" passa agora a valer 10;
- Na linha 18, "p4" passa a apontar para o endereço de d;
- Por fim, na linha 19, o valor de "p4", que no caso é o "d", passa a ser o valor de "b", que é 20,
mais o conteúdo de "p1", que é o "a" e vale 10. Logo "d" passa a valer 30;
- Ademais, ainda na linha 19, o conteúdo de "p1", no caso "a", sofre o acrescimo de uma unidade passando
a valer 11;

- O resultado final será:
a- 11;
b- 20;
c - 10;
d - 30;
*/