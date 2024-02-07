//Vou renomear meu tipo estruturado;
typedef struct ingresso Ingresso;
//Vou chamar minha função que preenche os ingressos passando como parametro
//o ponteiro do tipo Ingresso *i
void preenche(Ingresso *i);
/*Vou chamar minha função que imprime meus ingressos passando como parametro 
o ponteiro do tipo Ingresso *i e uma variável do tipo inteiro n*/
void imprima(Ingresso *i, int n);
/*Vou chamar minha função que altera o preço do meu ingressos passando como parametro 
o ponteiro do tipo Ingresso *vet, que é um vetor e uma variável do tipo inteiro n*/
void altera_preco_especifico(int n, Ingresso *vet);
/*Vou chamar minha função que classifica meus ingressos em + barato e + caro passando como parametro 
o ponteiro do tipo Ingresso *vet, que é um vetor e uma variável do tipo inteiro n*/
void menor_e_maior_valor(int n, Ingresso *vet);