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
    printf("Informe uma opção válida e aperte a tecla enter\n\n");
    printf("1. Gestão de TI\n");
    printf("2. Análise d Desenvolvimento de Sistemas\n");
    printf("3. Segurança da Informação\n");
    printf("4. Calcular Média Aluno\n");
    printf("0. Sair\n");

    scanf("%d", &continuar);
    system("cls || clear");

    switch(continuar)
    {
        case 1:
            mensagem ="Gestão de TI é a atividade que coordena todos os processos relacionados à tecnologia da informação dentro de uma empresa. Logo, o gestor de TI é o profissional responsável por garantir a máxima eficiência no uso dos recursos humanos e tecnológicos, otimizando a performance da organização.\n\n";
            retornarMensagem(mensagem);
            retornarMenu();
            break;

        case 2:
            mensagem = "O analista e desenvolvedor de sistemas é o profissional responsável por desenvolver, projetar, analisar, implementar e realizar a manutenção de sistemas de informação de diversos setores.\n\n";
            retornarMensagem(mensagem);
            retornarMenu();
            break;

        case 3:
            mensagem = "Segurança da informação é a prática que mantém os dados sensíveis em sigilo, a defesa do que não é público\n\n";
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
    // declaração de variaveis
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
        printf("Aluno Aprovado sua média semestral foi: %0.2f", media);
        printf("\nSeu percentual de presença foi semestral foi: %0.2f %%", percentualPresenca);
        printf("\nParabéns por sua dedicação \n");
        retornarMenu();
    }
  	return 0;
}
