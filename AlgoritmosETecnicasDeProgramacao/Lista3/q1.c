#include <stdio.h>


typedef struct
{
    char rua[50];
    char bairro[20];
    char cidade [50];
    char estado[20];
    int cep;

} Endereco;

typedef struct {
    char nome[100];
    Endereco endereco;
    int salario;
    int indentidade;
    int cpf;
    char estadoCivil[8];
    int telefone;
    int idade;
    char sexo[10];
} Cadastro;

