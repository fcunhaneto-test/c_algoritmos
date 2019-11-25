#include <stdio.h>

int main() {
    char nome[20];
    char sobrenome[20];
    char **apelido;
    char *s;

    printf("Entre com um nome:\n");
    scanf("%19s", nome);
    printf("Entre com um sobrenome:\n");
    scanf("%19s", sobrenome);
    printf("Entre com uma string:\n");
    scanf("%s", apelido);

    printf("\n******************************************************\n");

    printf("nome: %s\n", nome);
    printf("sobrenome: %s\n", sobrenome);
    printf("apelido: %s\n", apelido);

    printf("tamanho na memoria de nome: %ld\n", sizeof(nome));
    printf("tamanho na memoria de sobrenome: %ld\n", sizeof(sobrenome));
    printf("tamanho na memoria de apelido: %ld\n", sizeof(apelido));
    printf("tamanho na memoria de *apelido: %ld\n\n", sizeof(*apelido));

    s = nome;
    
    // imprime todo o nome
    printf("%s\n", s);
    // imprime a primeira letra do nome
    printf("primeira letra de nome=*s: %c\n", *s);
    // imprime a quarta letra do nome
    printf("quarta letra de nome=3[nome]: %c\n", 3[nome]);
    // imprime a segunda letra do nome
    printf("segunda letra de nome=*(s+1): %c\n", *(s+1));
    
    return 0;
}