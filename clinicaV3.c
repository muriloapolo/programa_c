#include <stdio.h> // lib padrao
#include <stdlib.h> //lib windows
#include <string.h> ///lib de strings
#include <conio.h>
//globais do programa
#define SIZE 200

//Opcao continue do programa
int op;
//Faz com que o menu continue rodando
int continuar= 1;
//Funcoes globais de dados
//variáveis do paciente
char nomeP[SIZE][50];
int telefoneP[SIZE][15];
char enderecoP[SIZE][50];
int idadeP[SIZE];
int cpf[16];

//variáveis do medico
char nomeMedico[SIZE][50];
char especialidade[SIZE][50];
int telefone[SIZE];
int crm[SIZE];

//variaveis de consulta
char paciente[SIZE][50];
char medico[SIZE][50];
float data[SIZE];

//Functions sem retorno
void cadPaciente();
void cadMedico();
void agConsulta();
//sub funcoes da consulta
void agendarConsulta();
void pesquisarConsulta();
//--------------
void procPaciente();
void procMedico();
void sair();


int main(void) {

	do {
		printf("\n\tSistema Clinica Viver Melhor\n\n");
		printf("\n\tEscolha a Opcao desejada\n\n");
		printf("1. Cadastrar Paciente\n");
		printf("2. Cadastrar Medico\n");
		printf("3. Sistema Agendamento\n");
		printf("4. Procurar Paciente CPF\n");
		printf("5. Procurar Medico CRM\n");
		printf("0. Sair\n");

		scanf("%d", &continuar);
		system("cls || clear");

		switch(continuar) {
			case 1:
				cadPaciente();
				break;

			case 2:
				cadMedico();
				break;

			case 3:
				agConsulta();
				break;
			case 4:
				procPaciente();
				break;
			case 5:
				procMedico();
				break;
			case 0:
				sair();
				break;

			default:
				printf("Digite uma opcao valida\n");
		}
	} while(continuar);
}
// 1 cadastrar paciente
void cadPaciente() {
	static int linhaPaciente;
	do {
		printf("\nApenas letras ou numeros sem caracteres especiais\n");
		printf("\nPara Espacos utilize _ (underline)\n");
		printf("\nDigite o Nome do Paciente: ");
		scanf("%s", nomeP[linhaPaciente]);
		printf("\nDigite o telefone do Paciente: ");
		scanf("%d", &telefoneP[linhaPaciente]);
		printf("\nDigite o endereco do Paciente: ");
		scanf("%s", enderecoP[linhaPaciente]);
		printf("\nDigite o idade do Paciente: ");
		scanf("%d", &idadeP[linhaPaciente]);
		printf("\nDigite o CPF do Paciente: ");
		scanf("%d", &cpf[linhaPaciente]);
		printf("\nDigite 1 para continuar ou outro valor para sair\n");
		scanf("%d", &op);
		linhaPaciente++;
		system("cls || clear");
	} while(op==1);
}

// 2 cadastrar medico
void cadMedico() {
	static int linhaMedico;
	do {
		printf("\nApenas letras ou numeros sem caracteres especiais\n");
		printf("\nDigite o Nome do Medico: ");
		scanf("%s", nomeMedico[linhaMedico]); //
		printf("\nDigite a especialidade do Medico: ");
		scanf("%s", especialidade[linhaMedico]);
		printf("\nDigite o telefone do Medico: ");
		scanf("%d", &telefone[linhaMedico]);
		printf("\nDigite o CRM: ");
		scanf("%d", &crm[linhaMedico]);
		printf("\nDigite 1 para continuar ou outro valor para sair\n");
		scanf("%d", &op);
		linhaMedico++;
		system("cls || clear");
	} while(op==1);
}
// 3 agendar consulta
void agConsulta() {
	do {
		printf("\n\tSistema de agendamento\n\n");
		printf("\n\tEscolha a Opcao desejada\n\n");
		printf("1. Agendar Consulta\n");
		printf("2. Buscar Consulta\n");
		printf("0. Sair\n");
		scanf("%d", &op);
		system("cls || clear");

		switch(op) {
			case 1:
				agendarConsulta();
				break;
			case 2:
				pesquisarConsulta();
				break;
			default:
				printf("Digite uma opcao valida\n");
		}
	} while(op);
}


//sub funcao da consulta
//Nao faco ideia como faz
void agendarConsulta() {
//char paciente[SIZE][50];
//char medico[SIZE][50];
//float data[SIZE];

	// int cpfconsulta;
	// char crmConsulta;
	// int dataConsulta;
	// static int linhaConsulta;


	// int ci;//consulta index

	// do {
	// 	printf("\nDigite o numero do CPF do paciente: \n");
	// 	scanf("%d", &cpfconsulta[linha]);
	// 	printf("\nDigite o CRM do medico: \n");
	// 	scanf("%d", &crmConsulta);
	// 	printf("\nDigite a data desejada: \n");
	// 	scanf("%d", &data[agendaLinha]);

	// 	for(ci=0; ci<SIZE; ci++) {
	// 		if(cpf[ci]==cpfconsulta && crm[ci]==crmConsulta) {
	// 			paciente[agendaLinha][50] = * nomeP[ci];
	// 			printf("\nPaciente: %s", paciente[ci]);
	// 			medico[agendaLinha][50] = * nomeMedico[ci];
	// 			printf("\nMedico: %s", medico[ci]);		
	// 		}
	// 	}

	// 	printf("\nAgendado.");
	// 	agendaLinha++;
	// 	printf("\nDigite 1 para continuar agendando ou zero para sair: ");

	// 	scanf("%d", &op);
	// 	system("cls || clear");
	// } while(op==1);


	// system("cls || clear");
}
void pesquisarConsulta() {
	
//		printf("\nPaciente: %s", paciente[agendaLinha]);
//		printf("\nMedico: %s", medico[agendaLinha]);
	system("cls || clear");
}

//fim da sub secao consulta




// 4 procurar Paciente
void procPaciente() {
	int cpfPesquisa;
	int i;
	do {
		printf("\nDigite o numero do CPF para buscar: \n");
		scanf("%d", &cpfPesquisa);
		for(i=0; i<SIZE; i++) {
			if(cpf[i]==cpfPesquisa) {
				printf("\nNome: %s\nTelefone: %d\nEndereco: %s \nIdade: %d \nCPF %d", nomeP[i], telefoneP[i],enderecoP[i], idadeP[i], cpf[i]);
			}
		}
		printf("\nDigite 1 para continuar pesquisando ou zero para sair: ");
		scanf("%d", &op);
		system("cls || clear");

	} while(op==1);
}

// 5 procurar medico
void procMedico() {

	int crmPesquisa;
	int i;
	do {
		printf("\nDigite o numero do CRM para buscar: \n");
		scanf("%d", &crmPesquisa);
		for(i=0; i<SIZE; i++) {
			if(crm[i]==crmPesquisa) {
				printf("\nNome: %s\nEspecialidade: %s\nTelefone: %d\nCRM: %d",nomeMedico[i], especialidade[i], telefone[i],  crm[i]);
			}
		}
		printf("\nDigite 1 para continuar pesquisando ou 0(zero) para sair: ");
		scanf("%d", &op);
		system("cls || clear");
	} while(op==1);
}

void sair() {
	printf("Ate outra Hora.\n");
}
