#include <stdio.h>

int main(){

    typedef struct{
        int dia, mes, ano;
    }tDAta;
    typedef struct{
        char nome[50];
        tDAta data;
    }tRegistro;
    tRegistro pessoa;/*nome da variavel que contem o struct*/
    tRegistro *ptrpessoa=&pessoa;/*ponteiro apontando para variavel do struct*/

    printf("Nome: ");
    fgets(pessoa.nome,50,stdin);
    printf("Data de Nascimento: ");
    scanf("%d %d %d", &pessoa.data.dia, &pessoa.data.mes, &pessoa.data.ano);
    /*acesso de variavel do struct, nomeDoStruct.nomeDaVariavelDentroDoStruct*/
    printf("\nNome: %s", pessoa.nome);
    printf("Data de Nascimento: %02d/%02d/%02d\n", pessoa.data.dia, pessoa.data.mes, pessoa.data.ano);
    /*acesso ao ponteiro do struct, nomeDoPonteiroStruct->nomeDaVariavelDentroDoStruct*/
    printf("\nNome: %s", ptrpessoa->nome);
    printf("Data de Nascimento: %02d/%02d/%02d\n", ptrpessoa->data.dia, ptrpessoa->data.mes, ptrpessoa->data.ano);

    return 0;
}