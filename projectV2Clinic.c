#include <stdio.h>
#include <stdlib.h>
//globais do programa
#define SIZE 200
int op; //Opcao continue do programa

    //variáveis do paciente
    char nomeP[SIZE][50];
    int telefoneP[SIZE];
    char enderecoP[SIZE][50];
    int idadeP[SIZE];
    int cpf[SIZE];

// 1 cadastrar paciente
void cadPaciente()
{
    static int linhaPaciente;
    do{
        printf("\nApenas letras ou numeros sem caracteres especiais\n");
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
    } while(op==1);
}

//variáveis do medico
    char nomeMedico[SIZE][50];
    char especialidade[SIZE][50];
    int telefone[SIZE];
    int crm[SIZE];
    int op; //Opcao continue do medico
// 2 cadastrar medico
void cadMedico()
{
        static int linhaMedico;
    do{
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
    } while(op==1);
}
// 3 agendar consulta
void agConsulta()
{
    printf("Meus bits...digo, minha familia vai bem!\n");
}
// 4 procurar Paciente
void procPaciente()
{
int cpfPesquisa;
int i;
do {
    printf("\nDigite o numero do CPF para buscar: \n");
    scanf("%d", &cpfPesquisa);
    for(i=0;i<SIZE;i++){       
        if(cpf[i]==cpfPesquisa){
            printf("\nNome: %s\nTelefone: %d\nEndereco: %s \nIdade: %d \nCPF %d", nomeP[i], telefoneP[i],enderecoP[i], idadeP[i], cpf[i]);
        }
    }
    printf("\nDigite 1 para continuar pesquisando ou zero para sair: ");
    scanf("%d", &op);    
}while(op==1);
}

// 5 procurar medico
void procMedico()
{
    
int crmPesquisa;
int i;
do {
    printf("\nDigite o numero do CRM para buscar: \n");
    scanf("%d", &crmPesquisa);
    for(i=0;i<SIZE;i++){       
        if(crm[i]==crmPesquisa){
            printf("\nNome: %s\nEspecialidade: %s\nTelefone: %d\nCRM: %d",nomeMedico[i], especialidade[i], telefone[i],  crm[i]);
        }
    }
    printf("\nDigite 1 para continuar pesquisando ou 0(zero) para sair: ");
    scanf("%d", &op);  
}while(op==1);
}

void sair()
{
    printf("Ate outra Hora.\n");
}

int main()
{
    int continuar= 1;

    do
    {
        printf("\n\tSistema Clinica Viver Melhor\n\n");
        printf("\n\tEscolha a Opcao desejada\n\n");
        printf("1. Cadastrar Paciente\n");
        printf("2. Cadastrar Medico\n");
        printf("3. Agendar Consulta\n");
        printf("4. Procurar Paciente CPF\n");
        printf("5. Procurar Medico CRM\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
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