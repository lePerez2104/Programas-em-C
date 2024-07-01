/*
	Name: Tabuada.cpp
	Author: Letícia Vitória
	Date: 25/06/24 20:30
	Description: Faça uma função recursiva que faça a tabuada de algum número digitado

*/

// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Prototipação
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

// Função para realizar a tabuada de soma
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
