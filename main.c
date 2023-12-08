#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCESSO 0

#define TAM_MAX_STRING 100

struct carro{
    float preco;
    int ano;
    char* marca;
    char* modelo;
    char* condicao;
    char* combustivel;
    long int odometro;
    char* status;
    char* cambio;
    char* tamanho;
    char* tipo;
    char* cor;
    };

typedef struct carro carro;

int main(int argc, char** argv){
    return SUCESSO;
}
