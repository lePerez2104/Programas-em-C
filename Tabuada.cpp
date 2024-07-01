/*
	Name: Tabuada.cpp
	Author: Let�cia Vit�ria
	Date: 25/06/24 20:30
	Description: Fa�a uma fun��o recursiva que fa�a a tabuada de algum n�mero digitado

*/

// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Prototipa��o
int tabuada(int, int);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero = 0; 
	
	puts("| TABUADA |");
	printf("\nInsira um numero: ");
	scanf("%d", &numero);

	tabuada(numero, 1);		
}

// Fun��o para realizar a tabuada de soma
int tabuada(int num, int i)
{		
	if(i <= 10)
	{
		printf("%d x %d = %d\n", num, i, num * i);
		tabuada(num, ++i);
	}
	else 	
		return 0;
		
}
