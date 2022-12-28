#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct tipo_endereco{
	
	char rua[40];
	int numero;
	char bairro[20];
	char cidade[20];
	char estado[20];
	char cep[15];
};

struct tipo_nascimento{
	
	int dia;
	int mes;
	int ano;	
};

struct dados_cliente{
	
	char nome[40];
	char cpf[15];
	char telefone[15];
	char sexo[15];
	
	struct tipo_endereco endereco;
	struct tipo_nascimento nascimento;
	
};

struct dados_cliente cliente[1];

int main(void){
	
	int i;
	
	setlocale(LC_ALL,"Portuguese");
		
	printf(" *************** CADASTRO DE CLIENTES C&A *************** \n");
	
	for(i=0; i<1; i++){
		
	printf(" -------------------- DADOS PESSOAIS -------------------- \n");
	
	printf("\n");
		
		printf(" Digite seu nome------------------------: ");
		fflush(stdin);
		fgets(cliente[i].nome, 40, stdin);
		printf(" Digite seu telefone--------------------: ");
		fflush(stdin);
		fgets(cliente[i].telefone, 15, stdin);
		printf(" Digite seu CPF-------------------------: ");
		fflush(stdin);
		fgets(cliente[i].cpf, 15, stdin);
		printf(" Digite seu sexo------------------------: ");
		fflush(stdin);
		fgets(cliente[i].sexo, 15, stdin);
		printf(" Digite o dia  do nasc.-----------------: ");
		scanf("%d", &cliente[i].nascimento.dia);
		printf(" Digite o mês  do nasc.-----------------: ");
		scanf("%d", &cliente[i].nascimento.mes);
		printf(" Digite o ano  do nasc.-----------------: ");
		scanf("%d", &cliente[i].nascimento.ano);
		
		
	printf("\n");
	printf("\n ----------------------- ENDEREÇO -----------------------\n ");
	printf("\n");
	
		printf(" Digite sua rua-------------------------: ");
		fflush(stdin);
		fgets(cliente[i].endereco.rua, 40, stdin);	
		printf(" Digite o numero------------------------: ");
		scanf("%d", &cliente[i].endereco.numero);
		printf(" Digite seu bairro----------------------: ");
		fflush(stdin);
		fgets(cliente[i].endereco.bairro, 20, stdin);
		printf(" Digite sua cidade----------------------: ");
		fflush(stdin);
		fgets(cliente[i].endereco.cidade, 20, stdin);
		printf(" Digite seu estado----------------------: ");
		fflush(stdin);
		fgets(cliente[i].endereco.estado, 20, stdin);
		printf(" Digite seu CEP-------------------------: ");
		fflush(stdin);
		fgets(cliente[i].endereco.cep, 15, stdin);
		
	}
	
	for(i=0; i<1; i++){
		
	printf("\n");
	printf(" ------------------- DADOS CADASTRADOS ------------------- \n");
	printf("\n");
	
	printf(" Nome-------------------------------:  %s\n", cliente[i].nome);
	printf(" Telefone---------------------------: %s\n", cliente[i].telefone);
	printf(" CPF--------------------------------: %s\n", cliente[i].cpf);
	printf(" Sexo-------------------------------: %s\n", cliente[i].sexo);
	printf(" Rua--------------------------------: %s\n", cliente[i].endereco.rua);
	printf(" Numero-----------------------------: %d\n", cliente[i].endereco.numero);
	printf(" Bairro-----------------------------: %s\n", cliente[i].endereco.bairro);
	printf(" Cidade-----------------------------: %s\n", cliente[i].endereco.cidade);
	printf(" Estado-----------------------------: %s\n", cliente[i].endereco.estado);
	printf(" CEP--------------------------------: %s\n", cliente[i].endereco.cep);
	printf(" Dia do nascimento------------------: %d\n", cliente[i].nascimento.dia);
	printf(" Mês do nascimento------------------: %d\n", cliente[i].nascimento.mes);
	printf(" Ano do nascimento------------------: %d\n", cliente[i].nascimento.ano);
	
}
	system("pause");
	return(0);
}
