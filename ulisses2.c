#include<stdio.h>
#include<stdlib.h>

struct Pessoa{
    char nome[50];
    int idade; 
    char endereco[50];
};


int main(){
    struct Pessoa pessoa1; 
    
    printf("Digite seu nome: ");
    scanf(" %[^\n]", pessoa1.nome);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa1.idade);
    printf("Digite seu endereco: ");
    scanf(" %[^\n]", pessoa1.endereco);
    
    
     printf("\nDados da Pessoa:\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Endereco: %s\n", pessoa1.endereco);
}
