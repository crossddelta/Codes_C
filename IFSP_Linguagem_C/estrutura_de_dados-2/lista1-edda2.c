#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*Prot�tipos das fun��es*/
int main();
void ex_um(void);
void ex_dois(void);
void ex_tres(void);
void ex_quat(void);
void ex_cinco(void);
void ex_seis(void);
void ex_sete(void);
void ex_oito(void);
void ex_nove(void);
void ex_dez(void);
void ex_onze(void);
int maior(int * vetor);
int menor(int * vetor);

int main()
{
	setlocale(LC_ALL, "");
	int opc;
do
{
	printf("====================================================================================================\n");
	printf("				1� LISTA DE EXERC�CIOS - REVIS�O			\n\n");
	printf("====================================================================================================\n\n");
	printf("1- Desenvolver um programa para ler um n�mero inteiro e exibir se � par ou �mpar.\n\n");
	printf("2- Desenvolver um programa para ler um n�mero inteiro e exibir se � m�ltiplo de tr�s ou m�ltiplo de cinco.\n\n");
	printf("3- Desenvolver um programa para ler um n�mero inteiro e exibir se � divis�vel por sete ou tr�s.\n\n");
	printf("4- Desenvolver um programa para ler tr�s n�meros quaisquer e informar qual deles � o maior n�mero.\n\n");
	printf("5- Escreva um programa que, dadas duas datas, determine qual delas ocorreu cronologicamente antes "
			"em rela��o a�outra. Cada data � composta de tr�s n�meros inteiros, um representando o ano, outro "
			"o m�s e outro o dia. Neste exerc�cio voc� deve utilizar uma estrutura para armazenar e comparar "
			"as duas datas, cada data com tr�s campos descritos acima.\n\n");
	printf("6- Fa�a um programa que receba uma data de validade e a data atual e indique se o produto j� est� "
			"vencido ou n�o. (obs: assuma que o usu�rio informar� datas v�lidas). Novamente, voc� dever� utilizar "
			"estrutura (struct) para armazenar as datas.\n\n");
	printf("7- Desenvolver um programa para ler tr�s n�meros quaisquer e informar qual deles � o menor n�mero e "
			"qual deles � o maior n�mero.\n\n");
	printf("8- Desenvolver um programa para ler o nome de um produto e o valor de custo e exibir o valor de venda "
			"do produto. O valor de venda � o seu valor de custo acrescido em 30%%.\n\n");
	printf("9- Escreva um programa que, dado um n�mero em segundos, converta para dias, horas, minutos e segundos. "
			"Por exemplo, 7322 segundos correspondem a 0 dias, 2 horas, 2 minutos e 2 segundos.\n\n");
	printf("10- Desenvolver um programa para ler tr�s n�meros e apresentar como valor final o resultado da soma "
			"dos quadrados dos tr�s n�meros lidos.\n\n");
	printf("11- Fa�a um programa para ler 15 valores em um vetor. Em seguida, determine o maior e o menor elemento"
			"lido. Fa�a uso de uma fun��o chamada maior, que dever� retornar o maior elemento do vetor e outra "
			"fun��o chamada menor, que dever� retornar o menor elemento do vetor.\n\n");
	printf("0- Sair do programa.\n\n");
	printf("\nDigite o n�mero do exerc�cio que deseja visualizar: ");
	fflush(stdin);
	scanf("%d", &opc);

	switch(opc)
	{
		case 1 : 
			{
				system("cls");
				ex_um(); 
				getch();
				break;
			}
		case 2 :
			{
				system("cls");
				ex_dois();
				getch();
				break;
			}
		case 3 :
			{
				system("cls");
				ex_tres();
				getch();
				break;
			}
		case 4 :
			{
				system("cls");
				ex_quat();
				getch();
				break;
			}
		case 5 :
			{
			system("cls");
			ex_cinco();
			getch();
			break;								
			}
		case 6 :
			{
			system("cls");
			ex_seis();
			getch();
			break;				
			}
		case 7 :
			{
			system("cls");
			ex_sete();
			getch();
			break;				
			}
		case 8 :
			{
			system("cls");
			ex_oito();
			getch();
			break;				
			}
		case 9 :
			{
			system("cls");
			ex_nove();
			getch();
			break;				
			}
		case 10 :
			{
			system("cls");
			ex_dez();
			getch();
			break;				
			}
		case 11 :
			{
			system("cls");
			ex_onze();
			getch();
			break;				
			}
		default :
			{
			system("cls");
			printf("Op��o inv�lida, tente novamente!");
			getch();
			break;
			}
		case 0 :
			{
			system("cls");
			printf("\nPrograma encerrado com sucesso!");
			getch();
			exit(0);				
			}
	}
}
while(opc != 0);
	return(0);
}

void ex_um(void)
{
	int num;

	printf("Informe um valor para verificar se � par ou �mpar: ");
	fflush(stdin);
	scanf("%d", &num);

	if(num % 2 == 0) printf("O n�mero %d informado � par.", num);
	else printf("O n�mero %d informado � �mpar.", num);
	
	return;
}

void ex_dois(void)
{
	int num;
	
	printf("Informe um valor para saber se � m�ltiplo de 3 ou m�ltiplo de 5: ");
	fflush(stdin);
	scanf("%d", &num);
	
	if(num % 3 == 0)
		{
			printf("O n�mero %d � m�ltiplo de 3.\n", num);
			if(num % 5 == 0) 
				{
					printf("Al�m disso, o valor tamb�m � m�ltiplo de 5.\n", num);
				}
		}
	else if(num % 5 == 0)
		{
			printf("O n�mero %d � m�ltiplo de 5.\n", num);
		}
	else printf("O n�mero informado n�o � m�ltiplo de 3, nem de 5.");
	
	return;
}

void ex_tres(void)
{
	int num;
	
	printf("Informe um valor para saber se � divis�vel por 7 ou por 3: ");
	fflush(stdin);
	scanf("%d", &num);
	
	if(num % 3 == 0)
	{
		printf("\nO n�mero %d � divis�vel por 3.", num);
		
		if(num % 7 == 0)
		{
			printf("\nAl�m disso, esse n�mero tamb�m � divis�vel por 7.");
		}
	}
	else if(num % 7 == 0)
	{
		printf("\nO n�mero %d � divis�vel por 7.", num);
	}
	else printf("\nO valor informado n�o � divis�vel por 3, nem por 7.");
	
	return;
}

void ex_quat(void)
{
	int num, maior = 0;
	
	printf("Por favor, informe tr�s valores.\n");

	for(int i = 0; i < 3; i++)
	{
		printf("Valor %d/3: ", i+1);
		fflush(stdin);
		scanf("%d", &num);
			if(num > maior)
				maior = num;
	}

	printf("O maior valor informado foi: %d", maior);

	return;
}

void ex_cinco(void)
{
	typedef struct
	{ 
	int dia_atual;
	int dia;
	int mes_atual;
	int mes;
	int ano_atual;
	int ano;
	} registro;
	
	registro data;
	
	printf("Informe abaixo a data atual no formato (dd/mm/aaaa)\n");
	
	printf("\nInforme o dia atual: ");
	fflush(stdin);
	scanf("%d", &data.dia_atual);
	
	printf("\nInforme o m�s atual: ");
	fflush(stdin);
	scanf("%d", &data.mes_atual);
	
	printf("\nInforme o ano atual: ");
	fflush(stdin);
	scanf("%d", &data.ano_atual);
	
	printf("\n\nA data atual �: %02d/%02d/%04d\n\n", data.dia_atual, data.mes_atual, data.ano_atual);
	printf("\nAgora, informe abaixo uma data qualquer, para compar�-la � data atual. ");
	
	printf("\n\nInforme um dia: ");
	fflush(stdin);
	scanf("%d", &data.dia);
	
	printf("\nInforme um m�s: ");
	fflush(stdin);
	scanf("%d", &data.mes);
	
	printf("\nInforme um ano: ");
	fflush(stdin);
	scanf("%d", &data.ano);
	
	printf("\n\nA data informada foi: %02d/%02d/%04d\n\n", data.dia, data.mes, data.ano);
	if(data.ano > data.ano_atual)
	{
		printf("\nA data informada est� no futuro, se comparada � data atual.");
	}
	else if(data.ano == data.ano_atual && data.mes > data.mes_atual)
	{
		printf("\nA data informada est� no futuro, se comparada � data atual.");		
	}
	else if(data.ano == data.ano_atual && data.mes == data.mes_atual && data.dia > data.dia_atual)
	{
		printf("\nA data informada est� no futuro, se comparada � data atual.");
	}
	else
		printf("\nA data informada est� no passado, se comparada � data atual.");
		
	return;
}

void ex_seis(void)
{
	typedef struct
	{ 
	int dia_atual;
	int dia;
	int mes_atual;
	int mes;
	int ano_atual;
	int ano;
	} registro;
	
	registro data;
	
	printf("Informe abaixo a data atual no formato (dd/mm/aaaa)\n");
	
	printf("\nInforme o dia atual: ");
	fflush(stdin);
	scanf("%d", &data.dia_atual);
	
	printf("\nInforme o m�s atual: ");
	fflush(stdin);
	scanf("%d", &data.mes_atual);
	
	printf("\nInforme o ano atual: ");
	fflush(stdin);
	scanf("%d", &data.ano_atual);
	
	printf("\n\nA data atual �: %02d/%02d/%04d\n\n", data.dia_atual, data.mes_atual, data.ano_atual);
	printf("\nAgora, informe abaixo a data de validade do produto. ");
	
	printf("\n\nInforme o dia: ");
	fflush(stdin);
	scanf("%d", &data.dia);
	
	printf("\nInforme o m�s: ");
	fflush(stdin);
	scanf("%d", &data.mes);
	
	printf("\nInforme o ano: ");
	fflush(stdin);
	scanf("%d", &data.ano);
	
	printf("\n\nA data informada foi: %02d/%02d/%04d\n\n", data.dia, data.mes, data.ano);
	if(data.ano > data.ano_atual)
	{
		printf("\nO produto est� dentro da validade, portanto pode ser consumido.");
	}
	else if(data.ano == data.ano_atual && data.mes > data.mes_atual)
	{
		printf("\nO produto est� dentro da validade, portanto pode ser consumido.");		
	}
	else if(data.ano == data.ano_atual && data.mes == data.mes_atual && data.dia > data.dia_atual)
	{
		printf("\nO produto est� dentro da validade, portanto pode ser consumido.");
	}
	else
		printf("\nO produto ultrapassou a data de validade, j� n�o � mais pr�prio para o consumo.\n\nDescarte-o adequadamente.");
	
	return;
}

void ex_sete(void)
{
	float num, maior = 0, menor = 999999;
	
	printf("Por favor, informe tr�s valores.\n");

	for(int i = 0; i < 3; i++)
	{
		printf("Valor %d/3: ", i+1);
		fflush(stdin);
		scanf("%f", &num);
			if(num > maior)
				maior = num;
			if(num < menor)
				menor = num;
	}

	printf("O maior valor informado foi: %.1f\n", maior);
	printf("O menor valor informado foi: %.1f\n", menor);
	
	return;
}

void ex_oito(void)
{
	float valor_custo, valor_venda;
	char nome[30];
	
	printf("Por favor, informe o nome do produto: ");
	fflush(stdin);
	gets(nome);
	
	printf("\nInforme o valor de custo do produto para visualizar o valor de venda recomendado: R$");
	fflush(stdin);
	scanf("%f", &valor_custo);
	
	valor_venda = valor_custo + (valor_custo * 0.3);
	
	printf("\nO valor de venda recomendado para o produto [%s] � de: R$%.2f", nome, valor_venda);
	
	return;
}

void ex_nove(void)
{
	int valor, segundos, minutos, horas;
	
	printf("Informe uma quantidade de tempo em segundos: ");
	fflush(stdin);
	scanf("%d", &valor);
	
	horas = valor / 3600;
	minutos = (valor % 3600) / 60;
	segundos = (valor % 3600) % 60;
	
	printf("\n%d segundos equivalem �:\n%02d horas\n%02d minutos\n%02d segundos", valor, horas, minutos, segundos);
	return;
}

void ex_dez(void)
{
	int num[3], quad[3], soma;
	
	printf("Informe tr�s valores: \n");
	for(int i = 0; i < 3; i++)
	{
		printf("\nValor %d/3: ", i+1);
		fflush(stdin);
		scanf("%d", &num[i]);
	
		quad[i] = num[i] * num[i];
	}
	
	for(int j = 0; j < 3; j++)
	{
		soma = soma + quad[j];
	}
	
	printf("\nA soma do quadrado dos tr�s valores informados �: %d", soma);
	
	return;
}

void ex_onze(void)
{
	int vetor[15];
	
	printf("Informe abaixo quinze valores para preencher o vetor:");
	
	for(int i = 0; i < 15; i++)
	{
		printf("\nValor %d/15: ", i+1);
		fflush(stdin);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nMaior valor informado no vetor: %d", maior(vetor));
	printf("\nMenor valor informado no vetor: %d", menor(vetor));
	
	return;
}

int maior(int * vetor)
{
	int maior = 0;
	
	for(int i = 0; i < 15; i++)
	{
		if(vetor[i] > maior)
			maior = vetor[i];
	}
	
	return(maior);
}

int menor(int * vetor)
{
	int menor = 9999999;
	
	for(int i = 0; i < 15; i++)
	{
		if(vetor[i] < menor)
			menor = vetor[i];
	}
	
	return(menor);
}
