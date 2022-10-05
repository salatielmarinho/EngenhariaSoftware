#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    menu();
}
void retornarMensagem(const char* mensagem)
{
    printf(mensagem);
    return;
}

void sair()
{
    printf("Obrigado por visitar nossa lista de cursos\n");
    system("pause");
}
void menu()
{
    int continuar = 1;
    const char* mensagem;

    printf("\n\tMenu de Cursos\n\n");
    printf("Informe uma op��o v�lida e aperte a tecla enter\n\n");
    printf("1. Gest�o de TI\n");
    printf("2. An�lise d Desenvolvimento de Sistemas\n");
    printf("3. Seguran�a da Informa��o\n");
    printf("4. Calcular M�dia Aluno\n");
    printf("0. Sair\n");

    scanf("%d", &continuar);
    system("cls || clear");

    switch(continuar)
    {
        case 1:
            mensagem ="Gest�o de TI � a atividade que coordena todos os processos relacionados � tecnologia da informa��o dentro de uma empresa. Logo, o gestor de TI � o profissional respons�vel por garantir a m�xima efici�ncia no uso dos recursos humanos e tecnol�gicos, otimizando a performance da organiza��o.\n\n";
            retornarMensagem(mensagem);
            retornarMenu();
            break;

        case 2:
            mensagem = "O analista e desenvolvedor de sistemas � o profissional respons�vel por desenvolver, projetar, analisar, implementar e realizar a manuten��o de sistemas de informa��o de diversos setores.\n\n";
            retornarMensagem(mensagem);
            retornarMenu();
            break;

        case 3:
            mensagem = "Seguran�a da informa��o � a pr�tica que mant�m os dados sens�veis em sigilo, a defesa do que n�o � p�blico\n\n";
            retornarMensagem(mensagem);
            retornarMenu();
            break;

        case 4:
            calcularMediaAluno();
            retornarMenu();
            break;

        case 0:
            sair();
            break;

        default:
            printf("Digite uma opcao valida\n");
    }
}
void retornarMenu()
{
    system("pause");
    system("cls || clear");
    menu();
}

void calcularMediaAluno()
{
    // declara��o de variaveis
  	float np1;
  	float np2;
  	float notaPim;
  	float media;
  	float qtdeFaltas;
  	float percentualPresenca;

  	// entrada
  	printf("Digite a nota 1 : ");
	scanf("%f", &np1);
  	printf("Digite a nota 2 : ");
	scanf("%f", &np2);
	printf("Digite a nota do Pim : ");
	scanf("%f", &notaPim);
	printf("Digite a quantidade de faltas : ");
	scanf("%f", &qtdeFaltas);

  	// processamento
  	media = ((np1 * 40) + (np2 * 40) + (notaPim * 20)) / 100 ;
  	percentualPresenca = (qtdeFaltas * 100)/50;

	// criticar para saber se o aluno esta aprovado ou retido
	// saida
	if ((media >= 5) && (qtdeFaltas <= 18))
    {
        printf("Aluno Aprovado sua m�dia semestral foi: %0.2f", media);
        printf("\nSeu percentual de presen�a foi semestral foi: %0.2f %%", percentualPresenca);
        printf("\nParab�ns por sua dedica��o \n");
        retornarMenu();
    }
  	return 0;
}
