#include <stdio.h>
#include <stdlib.h>
#define SIZE 200
    char nomeP[SIZE][50];
    int telefoneP[SIZE];
    char enderecoP[SIZE][50];
    int idadeP[SIZE];
    float cpf[SIZE];
    int op;
// 1 cadastrar paciente
void cadPaciente()
{
    static int linha;
    do{
        printf("\nDigite o Nome do Paciente: ");
        scanf("%s", &nomeP[linha]);
        printf("\nDigite o telefone do Paciente: ");
        scanf("%d", &telefoneP[linha]);
        printf("\nDigite o endereco do Paciente: ");
        scanf("%s", &enderecoP[linha]);
        printf("\nDigite o idade do Paciente: ");
        scanf("%d", &idadeP[linha]);
        printf("\nDigite o CPF do Paciente: ");
        scanf("%d", &cpf[linha]);
        printf("\nDigite 1 para continuar ou outro valor para sair");
        scanf("%d", &op);
        linha++;
    } while(op==1);
}
// 2 cadastrar medico
void cadMedico()
{
    printf("Tudo otimo, e com voce?\n");
}
// 3 agendar consulta
void agConsulta()
{
    printf("Meus bits...digo, minha familia vai bem!\n");
}
// 4 procurar Paciente
void procPaciente()
{
    printf("Meus bits...digo, minha familia vai bem!\n");
}
// 5 procurar medico
void procMedico()
{
    printf("Meus bits...digo, minha familia vai bem!\n");
}

void sair()
{
    printf("Ja vai??? Nao! Nao! Espere! Naa...\n");
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
                procMedico();
                break;
            case 5:
                procPaciente();
                break;
            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}
//https://www.youtube.com/watch?v=Y-vIeBCblZk