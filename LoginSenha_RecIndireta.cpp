/*
	Name: LoginSenha_RecIndireta.cpp
	Author: Let�cia Vit�ria
	Date: 20/03/24 08:09
	Description: Programa para demonstrar a implementa��o de Fun��es Recursivas Indiretas
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>  // exit
#include <Windows.h>  // Sleep
#include <ctype.h>  // biblioteca para usar a fun��o de convers�o 'toupper', que converte caracteres de mai�sculos para min�sculos e vice-versa

// SESS�O DE PROTOTIPA��O
void verLogin();
void verSenha();

// VARI�VEIS GLOBAIS - todas as fun��es enxergam essas vari�veis
char user = 'L';
int senha = 123;
int i = 0;

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	
	int pwd = 0;  // pwd = password
	
	puts("Fazendo login no sistema...");
	verLogin();


} // fim do programa

// FUN��O PARA VERIFICA��O DO LOGIN DO USU�RIO
void verLogin()
{
	char usuario = ' ';
	printf("Login: ");
	scanf(" %c", &usuario);
		
	if(toupper(usuario) == user)  // se a vari�vel local for igual a vari�vel global
		verSenha();
	else
	{
		puts("\n======> usu�rio inv�lido - Tente novamente");
		verLogin();  // t�cnica de recursividade direta
	}
} // fim da fun��o verLogin()

// FUN��O PARA VERIFICA��O DO SENHA DO USU�RIO
void verSenha()
{
	int pwd = 0;
	printf("Senha: ");
	scanf("%d", &pwd);
	
	if (pwd == senha)
	{
		puts("Logado com Sucesso!!!");
		i = 0;
	}
	else
	{
			puts("Senha inv�lida");
			i++;
			if(i <= 2)
			{
			// configura recursividade indireta
			// verLogin();  // retomar a inser��o de dados desde o login
			// configura recursividade direta
			verSenha();  // retomar a inser��o de dados desde a senha
			}
			else
			{
				Sleep(2000);  // suspende o programa em 2s
				puts("Senha bloqueada - Contate seu banco");
				exit(0);
			}
	}
} // fim da fun��o verSenha()
