#include <stdio.h>

#define MAX_CLIENTES 5
#define MAX_PIZZAS 3
#define MAX_PEDIDOS 6

typedef struct{
    int telefone;
    int cep;
    char nome[50];
    char endereco[50];
    char complemento[50];
}tClientes;

typedef struct{
    int cod;
    char tipo[20];
    float valor;
}tPizzas;

typedef enum{EM_PREPARO, A_CAMINHO, ENTREGUE} Situacao;

typedef struct{
    int pedido;
    int telefone;
    int codigo_pizza;
    int codigo_motoqueiro;
    Situacao situacao;
}tPedido;

void cadastraCliente(tClientes v[]){
    for(int i=0;i<MAX_CLIENTES;i++){
        printf("Cadastro do cliente %d:\n", i+1);
        printf("Telefone: "); scanf("%d", &v[i].telefone); fflush(stdin);
        printf("Nome: "); fgets(v[i].nome,sizeof(v[i].nome),stdin); fflush(stdin);
        printf("Endereco: "); fgets(v[i].endereco,sizeof(v[i].endereco),stdin); fflush(stdin);
        printf("Complemento: "); fgets(v[i].complemento,sizeof(v[i].complemento),stdin); fflush(stdin);
        printf("CEP: "); scanf("%d", &v[i].cep); fflush(stdin);
        printf("Cliente cadastrado com sucesso!\n");
    }
}

void cadastraPizza(tPizzas v[]){
    for(int i=0;i<MAX_PIZZAS;i++){
        printf("Cadastro da pizza %d:\n", i+1); 
        printf("Codigo: "); scanf("%d", &v[i].cod); fflush(stdin);
        printf("Nome: "); fgets(v[i].tipo,sizeof(v[i].tipo),stdin); fflush(stdin);
        printf("Valor: "); scanf("%f", &v[i].valor); fflush(stdin);
        printf("Pizza cadastrada com sucesso!\n");
    }
}

void cadastraPedido(tPedido v[]){
    for(int i=0;i<MAX_PEDIDOS;i++){
        printf("Cadastro do pedido %d:\n", i+1); 
        printf("Numero do pedido: "); scanf("%d", &v[i].pedido); fflush(stdin);
        printf("Telefone: "); scanf("%d", &v[i].telefone); fflush(stdin);
        printf("Codigo da pizza: "); scanf("%d", &v[i].codigo_pizza); fflush(stdin);
        v[i].codigo_motoqueiro=-1; 
        v[i].situacao=EM_PREPARO;
        printf("Pedido cadastrado com sucesso!\n");
    }
}

void despachaPizza(tPedido v[]){
    int pedido, cod_motoboy, encontrado=0;
    printf("Digite o numero do pedido a ser despachado: "); scanf("%d", &pedido);
    printf("Digite o codigo do motoqueiro responsavel: "); scanf("%d", &cod_motoboy);
    for(int i=0;i<MAX_PEDIDOS;i++){
        if(pedido==v[i].pedido&&v[i].situacao==EM_PREPARO){
            v[i].codigo_motoqueiro=cod_motoboy;
            v[i].situacao=A_CAMINHO;
            encontrado=1;
            printf("Pedido despachado com sucesso!\n");
        }
    }
    if(encontrado==0)
        printf("Pedido recebido com sucesso!\n");
}

void recebePizza(tPedido v[]){
    int pedido, encontrado=0;
    printf("Digite o numero do pedido a ser recebido: "); scanf("%d", &pedido);
    for(int i=0;i<MAX_PEDIDOS;i++){
        if(pedido==v[i].pedido&&v[i].situacao==A_CAMINHO){
            v[i].situacao=ENTREGUE;
            printf("Pedido recebido com sucesso!\n");
            encontrado=1;
        }
    }
    if(encontrado==0)
        printf("Pedido nao encontrado!\n");
}

void mostraEntrega(tPedido v[], tPizzas p[], tClientes c[]){
    int encontrado=0;
    printf("Pizzas entregues:\n\n");
    for(int i=0;i<MAX_PEDIDOS;i++){
        if(v[i].situacao==ENTREGUE){
            for(int j=0;j<MAX_PIZZAS;j++){
                if(v[i].codigo_pizza==p[j].cod)
                for(int k=0;k<MAX_CLIENTES;k++){
                    if(v[i].telefone==c[k].telefone)
                        printf("Pedido: %d - Pizza: %s - Cliente: %s\n", v[i].pedido, p[j].tipo, c[k].nome);
                        encontrado=1;
                }       
            }
        }
    }
    if(encontrado==0)
        printf("Nenhum pedido entregue!\n");
}

int main(){
    tClientes cliente[MAX_CLIENTES];
    tPizzas pizzas[MAX_PIZZAS];
    tPedido pedidos[MAX_PEDIDOS];
    int op;
    do{
        printf("\n== MENU DA PIZZARIA ==\n");
        printf("1. Cadastrar cliente\n");
        printf("2. Cadastrar pizza\n");
        printf("3. Fazer pedido\n");
        printf("4. Despachar pizza\n");
        printf("5. Receber pizza\n");
        printf("6. Mostrar pizzas entregues\n");
        printf("7. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        printf("\n");
        switch(op){
            case 1:
                cadastraCliente(cliente);
                break;
            case 2:
                cadastraPizza(pizzas);
                break;
            case 3:
                cadastraPedido(pedidos);
                break;
            case 4:
                despachaPizza(pedidos);
                break;
            case 5:
                recebePizza(pedidos);
                break;
            case 6:
                mostraEntrega(pedidos,pizzas,cliente);
                break;
            case 7:
                printf("Encerrando o programa. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }while(op!=7);
    return 0;
}