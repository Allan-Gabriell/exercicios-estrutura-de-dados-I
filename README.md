# Algoritmos e Estruturas de Dados I

Este repositório contém todas as listas de exercícios passadas durante a primeira unidade da disciplina de Algoritmos e Estruturas de Dados I.

## Conteúdos

Os conteúdos abordados nas listas de exercícios incluem:

- Ponteiros
- Enums
- Union
- Ponteiros de função
- Tipos estruturados

Cada um desses tópicos está organizado em pastas separadas.

## Como usar este repositório

Cada pasta neste repositório corresponde a uma lista de exercícios. Dentro de cada pasta, você encontrará os arquivos de código fonte em linguagem C correspondentes a cada exercício da lista.

### Lista-1

Na Lista 1 você encontrará três códigos com as noções iniciais de ponteiro e seu funcionamento.

### Lista-2

Na lista 2, você encontrará dois códigos:

- **Código 1**: Este código realiza uma pesquisa para uma empresa para saber se as pessoas gostaram ou não de um novo produto. O programa lê as respostas do questionário e as armazena em dois arrays vinculados. Ele então determina a porcentagem de pessoas do sexo feminino que gostaram do produto e a porcentagem de pessoas do sexo masculino que não gostaram do produto.

- **Código 2**: Este código é um programa para corrigir provas de múltipla escolha. Ele lê o número de questões e o gabarito da prova, e então lê as respostas dos alunos. O programa calcula e mostra a nota obtida para cada aluno e a porcentagem de aprovação.

### Lista-3

Na lista 3, você encontrará dois códigos:

- **Código 1**: Este código cria uma estrutura para armazenar dados de um funcionário, incluindo nome, salário, identificador e cargo. Ele contém funções para:
    - Preencher os campos da estrutura com valores fornecidos pelo usuário.
    - Imprimir os valores dos campos da estrutura.
    - Realizar uma alteração no salário de um funcionário.
    - Receber um vetor de estruturas e imprimir o cargo e salário do funcionário com o maior salário e o cargo e salário do funcionário com o menor salário.

- **Código 2**: Este código cria uma estrutura para armazenar dados de uma pessoa, incluindo nome, número do documento e idade. Ele contém funções para:
    - Preencher os campos da estrutura com valores fornecidos pelo usuário.
    - Imprimir os valores dos campos da estrutura.
    - Realizar uma atualização da idade de uma pessoa.
    - Receber um vetor de estruturas e imprimir o nome da pessoa mais velha e mais nova.

### Lista-4

Na lista 4, você encontrará três códigos:

- **Código 1**: É um programa que implementa uma struct Pessoa com os campos:
    - Nome
    - Idade
    - Gênero

O gênero é armazenado como um enum com os valores MASCULINO e FEMININO. O programa ler e armazena os dados de uma pessoa e imprimir os dados da pessoa.

- **Código 2**: É um programa que implementa uma struct Produto com os campos:
    - Nome
    - Preço
    - Tipo

O tipo é armazenado como uma union que armazena um dos tipos:
    - ALIMENTO
    - BEBIDA
    - ELETRONICO

O programa ler e armazena os dados de um produto e imprimir os dados do produto.

- **Código 3**: É um programa que implementa uma struct Data com os campos:
    - Dia
    - Mês
    - Ano

O mês é armazenado como um enum com os valores:
    - JANEIRO
    - FEVEREIRO
    - MARÇO
    - ABRIL
    - MAIO
    - JUNHO
    - JULHO
    - AGOSTO
    - SETEMBRO
    - OUTUBRO
    - NOVEMBRO
    - DEZEMBRO

### Lista-4-com-enum

A lista 4 com enum são todos os códigos da lista 4 só que refeitos usando o tipo enumerado.

### Lista-5

Na lista 5, é possível encontrar 3 códigos:

- **Código 1**: Cria um tipo estruturado para armazenar dados de um ingresso, contendo os seguintes campos: 
    - Preço
    - Local
    - Atração 

Escreve uma função que recebe como parâmetro o endereço de uma estrutura do tipo Ingresso e preenche seus campos com valores fornecidos pelo usuário via teclado. Em seguida escreve uma função que recebe como parâmetro o endereço de uma estrutura do tipo Ingresso e imprime os valores dos seus campos. Depois escreve uma função que recebe, como parâmetros, o endereço de uma estrutura do tipo Ingresso e um novo valor de preço e atualiza o preço do ingresso para um novo valor. Logo após escreve uma função que recebe, como parâmetros, um vetor de ingressos e o tamanho do vetor e imprime os eventos de ingresso mais barato e mais caro.

- **Código 2**: Cria um programa em C que manipula dados de um conjunto de alunos da disciplina de Estrutura de Dados e Programação da UFERSA Pau dos Ferros. Para representar um aluno são necessárias as seguintes informações: 
    * Matrícula
    * Nome
    * Turma
    * Três notas
    * Média 

O programa leva em consideração que é ofertado um número máximo de vagas para a disciplina. É implementado uma função que recebe os dados de um aluno e o matricula na disciplina, caso haja vaga disponível. Cria-se uma função que lança as notas e calcula a média dos alunos da disciplina. Depois implementa uma função que imprime os dados de todos os alunos da disciplina. Em seguida é criada uma função que imprime os dados de todos os alunos de uma turma. Por fim é implementado uma função que imprime os alunos aprovados de uma determinada turma. Para ser aprovado, o aluno deve ter média maior que ou igual a 7,0.

- **Código 3**: Este é um programa em C que cria estruturas para representar retângulos (dados a base e a altura) e círculos (dado o raio). Dado um círculo, o programa cria e retorna o maior retângulo circunscrito de altura `h` possível, usando a seguinte fórmula:

    \(b = 2 \sqrt{r^2 - \left(\frac{h}{2}\right)^2}\)

    <img src="src/Captura de tela de 2024-01-28 15-09-56.png">

    onde `b` é a base do retângulo, `r` é o raio do círculo e `h` é a altura do retângulo.

Dado um retângulo, o programa cria e retorna o maior círculo que pode ser inscrito no retângulo. O raio `r` do círculo é determinado pela menor dimensão do retângulo (base ou altura), dividida por 2.
