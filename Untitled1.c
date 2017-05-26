#include <stdlib.h>
#include <stdio.h>
/*
typedef struct fornecedor {

int i;
int n;

char** nome
nome = (char**) malloc(n*sizeof(*char));
for(i=0;i<n;i++){
    nome[i] = (char*) malloc(50*sizeof(char));
}
}Fornecedor;

*/
typedef struct fornecedor2 {

int n;
char nome[50];
char cnpj[15];
int* produto;
produto = (int*) malloc(n*sizeof(int));

}Fornecedor;



typedef struct produto
{
    char nome[30];
    int cod;
    char categoria[30];
    int n_estoque;
    float preco;

}Produto;


typedef struct cadastro_cliente
{
    char nome[50], sexo;
    char cpf [12];
    char email[50];

}Cliente;

typedef struct cadastro_funcionario
{
    char nome [50], sexo, cpf[12];
    int cod;
    int senha;

}Funcionario;



int main(){






}

