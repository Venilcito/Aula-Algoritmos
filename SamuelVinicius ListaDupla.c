/*
Samuel Moreira de Souza e Vinicius Castamann Giongo

Funções para criar:

Inserir um cliente novo ao inicio
Remover o ultimo cliente
Buscar um cliente
Editar cliente
*/

// Includes para inserir as bibliotecas importantes;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>

// Declarando o Struct Cliente

struct cliente{
	int id;
	char nome[100];
	int cpf;
	int rg;
	int celular;
	int nascimento;
	char email[50];
	char estado[20];
	char cidade[50];
	char logradouro[50];
	int num;
	char bairro[50];
	char complemento[200];
	char profissao[50];
	double renda;
	struct cliente *proximo;
	struct cliente *anterior;
};

// Declarando ponteiros de inicio e fim da lista de Clientes

struct cliente *inicio = NULL;
struct cliente *fim = NULL;

// Declarando as funções cruas que executam as regras de negocios;

void inserirCliente_inicio(int id, char nome[], int cpf, int rg, int celular, int nascimento, char email[], char estado[], char cidade[], char logradouro[], int num, char bairro[], char complemento[], char profissao[], double renda);
void removerUltimoCliente();
struct cliente* buscar(int id);
void editarCliente(int id, char nome2[], int cpf2, int rg2, int celular2, int nascimento2, char email2[], char estado2[], char cidade2[], char logradouro2[], int num2, char bairro2[], char complemento2[], char profissao2[], double renda2);
void listarClientes();

// Declarando as funções controladoras;

void controlador_inserirCliente_inicio();
void controlador_removerUltimoCliente();
int controlador_buscarCliente();
void controlador_editarCliente();
void controlador_listarClientes();

//Função MAIN:

int main() {

	while(1){

		int opcao;
		
		printf("\n#####################################################");
		printf("\n################## ESCOLHA UMA OPÇÃO ################");
		printf("\n#####################################################");

		printf("\n(0) FECHAR");
		printf("\n(1) INSERIR NOVO CLIENTE NO INICIO");
		printf("\n(2) REMOVER ULTIMO CLIENTE");
		printf("\n(3) BUSCAR UM CLIENTE");
		printf("\n(4) EDITAR UM CLIENTE EXISTENTE");
		printf("\n(5) LISTAR TODOS OS CLIENTES\n");

		printf("Opção: ");
		scanf("%d", &opcao);
		printf("\n");

		switch(opcao){
			case 0:
				return 0;
				break;
			case 1:
				controlador_inserirCliente_inicio();
				break;
			case 2:
				controlador_removerUltimoCliente();
				break;
			case 3:
				controlador_buscarCliente();
				break;
			case 4:
				controlador_editarCliente();
				break;
			case 5:
				controlador_listarClientes();
				break;
		}
	}
	
	return 0;
}

//////////////////////////////////////////////////////////////////
////////////////////// CONTROLADORES /////////////////////////////
//////////////////////////////////////////////////////////////////

void controlador_inserirCliente_inicio(){

	int id;
	char nome[100];
	int cpf;
	int rg;
	int celular;
	int nascimento;
	char email[50];
	char estado[20];
	char cidade[50];
	char logradouro[50];
	int num;
	char bairro[50];
	char complemento[200];
	char profissao[50];
	double renda;
	
	printf("\n##################################################");
	printf("#############INSERIR UM NOVO CLIENTE:###############");
	printf("##################################################\n");

	printf("\nDIGITE O ID DO CLIENTE:\n");
	scanf("%d", &id);

	printf("\nDIGITE O NOME DO CLIENTE:\n");
	scanf(" %[^\n]", nome);

	printf("\nDIGITE O CPF DO CLIENTE:\n");
	scanf("%d", &cpf);

	printf("\nDIGITE O RG DO CLIENTE:\n");
	scanf("%d", &rg);

	printf("\nDIGITE O CELULAR DO CLIENTE:\n");
	scanf("%d", &celular);

	printf("\nDIGITE O NASCIMENTO DO CLIENTE:\n");
	scanf("%d", &nascimento);

	printf("\nDIGITE O EMAIL DO CLIENTE:\n");
	scanf(" %[^\n]", email);

	printf("\nDIGITE O ESTADO DO CLIENTE:\n");
	scanf(" %[^\n]", estado);

	printf("\nDIGITE O CIDADE DO CLIENTE:\n");
	scanf(" %[^\n]", cidade);

	printf("\nDIGITE O LOGRADOURO DO CLIENTE:\n");
	scanf(" %[^\n]", logradouro);

	printf("\nDIGITE O NUMERO DO CLIENTE:\n");
	scanf("%d", &num);
	
	printf("\nDIGITE O BAIRRO DO CLIENTE:\n");
	scanf(" %[^\n]", bairro);

	printf("\nDIGITE O COMPLEMENTO DO CLIENTE:\n");
	scanf(" %[^\n]", complemento);

	printf("\nDIGITE A PROFISSÃO DO CLIENTE:\n");
	scanf(" %[^\n]", profissao);

	printf("\nDIGITE A RENDA DO CLIENTE:\n");
	scanf("%lf", &renda);

	
	inserirCliente_inicio(id, nome, cpf, rg, celular, nascimento, email, estado, cidade, logradouro, num, bairro, complemento, profissao, renda);
}

// Função controladora para remover o ultimo cliente da lista:

void controlador_removerUltimoCliente(){

	printf("\n###################################################");
	printf("############### REMOVER UM CLIENTE: ##################");
	printf("####################################################\n");

	removerUltimoCliente();
}

// Função controladora para buscar um cliente pelo ID:

int controlador_buscarCliente(){

	int id;
	
	printf("\n###################################################");
	printf("################# BUSCAR UM CLIENTE: #################");
	printf("####################################################\n");

	printf("Digite o id do cliente: \n");
	scanf("%d", &id);
	printf("\n");

	struct cliente *atualzinho = buscar(id);

    if (atualzinho != NULL){
		
        printf("Cliente encontrado:\n");
		printf("Nome:        %s\n", atualzinho->nome);
		printf("CPF:         %d\n", atualzinho->cpf);
		printf("RG:          %d\n", atualzinho->rg);
		printf("Celular:     %d\n", atualzinho->celular);
		printf("Data Nasc:   %d\n", atualzinho->nascimento);
		printf("Email:       %s\n", atualzinho->email);
		printf("Estado:      %s\n", atualzinho->estado);
		printf("Cidade:      %s\n", atualzinho->cidade);
		printf("Logradouro:  %s\n", atualzinho->logradouro);
		printf("Num. Casa:   %d\n", atualzinho->num);
		printf("Bairro:      %s\n", atualzinho->bairro);
		printf("Complemento: %s\n", atualzinho->complemento);
		printf("Profissao:   %s\n", atualzinho->profissao);
		printf("Renda:       %.2lf\n", atualzinho->renda);    
		
	}else{
        printf("Cliente com ID %d não encontrado.\n", id);
    }
}

// Função controladora para editar dados de um cliente específico, buscando pelo ID;

void controlador_editarCliente(){
	
	int id;

	char nome[100];
	int cpf;
	int rg;
	int celular;
	int nascimento;
	char email[50];
	char estado[20];
	char cidade[50];
	char logradouro[50];
	int num;
	char bairro[50];
	char complemento[200];
	char profissao[50];
	double renda;
	
	printf("\n###################################################");
	printf("############## EDITAR UM CLIENTE: ###################");
	printf("###################################################\n");

	printf("\nDIGITE O ID DO CLIENTE:\n");
	scanf("%d", &id);

	printf("\nDIGITE O NOVO NOME DO CLIENTE:\n");
	scanf(" %[^\n]", nome);

	printf("\nDIGITE O NOVO CPF DO CLIENTE:\n");
	scanf("%d", &cpf);

	printf("\nDIGITE O NOVO RG DO CLIENTE:\n");
	scanf("%d", &rg);

	printf("\nDIGITE O NOVO CELULAR DO CLIENTE:\n");
	scanf("%d", &celular);

	printf("\nDIGITE O NOVO NASCIMENTO DO CLIENTE:\n");
	scanf("%d", &nascimento);

	printf("\nDIGITE O NOVO EMAIL DO CLIENTE:\n");
	scanf(" %[^\n]", email);

	printf("\nDIGITE O NOVO ESTADO DO CLIENTE:\n");
	scanf(" %[^\n]", estado);

	printf("\nDIGITE O NOVO CIDADE DO CLIENTE:\n");
	scanf(" %[^\n]", cidade);

	printf("\nDIGITE O NOVO LOGRADOURO DO CLIENTE:\n");
	scanf(" %[^\n]", logradouro);

	printf("\nDIGITE O NOVO NUMERO DO CLIENTE:\n");
	scanf("%d", &num);
	
	printf("\nDIGITE O NOVO BAIRRO DO CLIENTE:\n");
	scanf(" %[^\n]", bairro);

	printf("\nDIGITE O NOVO COMPLEMENTO DO CLIENTE:\n");
	scanf(" %[^\n]", complemento);

	printf("\nDIGITE A NOVA PROFISSÃO DO CLIENTE:\n");
	scanf(" %[^\n]", profissao);

	printf("\nDIGITE A NOVA RENDA DO CLIENTE:\n");
	scanf("%lf", &renda);

	editarCliente(id, nome, cpf, rg, celular, nascimento, email, estado, cidade, logradouro, num, bairro, complemento, profissao, renda);
}

// Função controladora para listar todos os clientes:

void controlador_listarClientes(){
	
	printf("\n####################################################");
	printf("############ LISTAR TODOS CLIENTE: ####################");
	printf("####################################################\n");

	listarClientes();
}

//////////////////////////////////////////////////////////////////
//////////////////// REGRA DE NEGOCIO ////////////////////////////
//////////////////////////////////////////////////////////////////


void inserirCliente_inicio(int id, char nome[], int cpf, int rg, int celular, int nascimento, char email[], char estado[], char cidade[], char logradouro[], int num, char bairro[], char complemento[], char profissao[], double renda){
	struct cliente *novo = (struct cliente*)malloc(sizeof(struct cliente));
	
    novo->id = id;
	strcpy(novo->nome, nome);
	novo->cpf = cpf;
	novo->rg = rg;
	novo->celular = celular;
	novo->nascimento = nascimento;
	strcpy(novo->email, email);
	strcpy(novo->estado, estado);
	strcpy(novo->cidade, cidade);
	strcpy(novo->logradouro, logradouro);
	novo->num = num;
	strcpy(novo->bairro, bairro);
	strcpy(novo->complemento, complemento);
	strcpy(novo->profissao, profissao);
	novo->renda = renda;
	
    novo->proximo = inicio;
    novo->anterior = NULL;

    if (inicio != NULL)
        inicio->anterior = novo;
    inicio = novo;
    if (fim == NULL)
        fim = novo;
}

void removerUltimoCliente(){
	if (fim == NULL) {
        printf("Nenhum cliente na lista\n");
        return;
    }
    struct cliente *temp = fim;
    fim = fim->anterior;
    if(fim != NULL){
        fim->proximo = NULL;
	}else{
        inicio = NULL;
    	free(temp);
    	printf("Ultimo cliente removido\n");
	}
}

// Função para buscar os clientes;

struct cliente* buscar(int id) {
    struct cliente *atual = inicio;
    while (atual != NULL){
        if (atual->id == id)
            return atual;
        atual = atual->proximo;
    }
    return NULL;
}

// Função para Editar um Cliente;

void editarCliente(int id, char nome2[], int cpf2, int rg2, int celular2, int nascimento2, char email2[], char estado2[], char cidade2[], char logradouro2[], int num2, char bairro2[], char complemento2[], char profissao2[], double renda2){
    struct cliente *edit = buscar(id);
    if (edit != NULL) {
        strcpy(edit->nome, nome2);
		edit->cpf = cpf2;
		edit->rg = rg2;
		edit->celular = celular2;
		edit->nascimento = nascimento2;
		strcpy(edit->email, email2);
		strcpy(edit->estado, estado2);
		strcpy(edit->cidade, cidade2);
		strcpy(edit->logradouro, logradouro2);
		edit->num = num2;
		strcpy(edit->bairro, bairro2);
		strcpy(edit->complemento, complemento2);
		strcpy(edit->profissao, profissao2);
		edit->renda = renda2;
		
        printf("Cliente editado com sucesso\n");
    } else {
        printf("Cliente com ID %d nao encontrado\n", id);
    }
}

// Função para listar todos os Clientes;

void listarClientes(){
	struct cliente *temp = inicio;
	int contador = 1;
    while (temp != NULL) {
		printf("\n-- Cliente %d --\n", contador);
        printf("ID:          %d\n", temp->id);
		printf("Nome:        %s\n", temp->nome);
		printf("CPF:         %d\n", temp->cpf);
		printf("RG:          %d\n", temp->rg);
		printf("Celular:     %d\n", temp->celular);
		printf("Data Nasc:   %d\n", temp->nascimento);
		printf("Email:       %s\n", temp->email);
		printf("Estado:      %s\n", temp->estado);
		printf("Cidade:      %s\n", temp->cidade);
		printf("Logradouro:  %s\n", temp->logradouro);
		printf("Num. Casa:   %d\n", temp->num);
		printf("Bairro:      %s\n", temp->bairro);
		printf("Complemento: %s\n", temp->complemento);
		printf("Profissao:   %s\n", temp->profissao);
		printf("Renda:       %.2lf\n", temp->renda);

        temp = temp->proximo;
		contador++;
    }
}