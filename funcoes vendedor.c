 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 typedef struct cadastro_funcionario
{
    char nome [50], sexo, cpf[12];
    int cod;
    int senha;

}Funcionario;

int conta_digitos(int x){
    int n=0;
    while(x>0){
        x = x/10;
        n++;
    }
    return n;
}

int  consulta_vendedor(){
    FILE* arquivo;
    arquivo = fopen("vendedor.txt", "rb");

    if(arquivo==NULL){
        printf("Não foi possível abrir o arquivo");
        system("pause");
        exit(1);

    }
    else{
        Funcionario g;
        int codigo, senha;
        printf("Digite a codigo do vendedor: ");
        scanf("%d",&codigo);
        printf("Digite a senha do vendedor: ");
        scanf("%d",&senha);


        while(fread(&g,sizeof(Funcionario),1,arquivo)==1){
            if((g.cod==codigo)&&(g.senha==senha)){
                printf("ACESSO AUTORIZADO\n");
                return 1;

            }
            else{
                printf("ACESSO NEGADO\n");
                return 0;printf("ACESSO AUTORIZADO\n");
                return 1;

            }
        }
       fclose(arquivo);
    }
}


void insere_vendedor(){
    FILE* arquivo;
    arquivo = fopen("vendedor.txt","ab");

    if(arquivo==NULL){
        printf("Não foi possível abrir o arquivo");
        system("pause");
        exit(1);

    }
    else{
        Funcionario g;
        char c;
        do{
            printf("Digite o nome do vendedor: ");
            fflush(stdin);
            fgets(g.nome,50,stdin);

            printf("Digite o sexo(M/F): ");
            fflush(stdin);
            scanf("%c",&g.sexo);

            printf("Digite o cpf: ");
            fflush(stdin);
            fgets(&(g.cpf),12,stdin);

            fflush(stdin);
            printf("Digite o codigo(6 digitos): ");
            do{
                scanf("%d",&(g.cod));
            }while(conta_digitos(g.cod)!=6);

            fflush(stdin);
            printf("Digite a senha(6 digitos): ");
            do{
                scanf("%d",&(g.senha));
            }while(conta_digitos(g.senha)!=6);+

            printf("\nDeseja continuar(S/N)");
            fflush(stdin);
            scanf("%c",&c);

            fwrite(&g,sizeof(Funcionario),1,arquivo);
        }while((c == 's')||(c=='S'));
    }
    fclose(arquivo);
}


int main(){

//insere_vendedor();
consulta_vendedor();





}
