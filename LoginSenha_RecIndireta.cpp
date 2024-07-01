/*
	Name: LoginSenha_RecIndireta.cpp
	Author: Letícia Vitória
	Description: Programa para realizar o login de um usuário podendo errar a senha apenas 3 vezes antes de bloqueá-la, utilizando recursividade indireta.
*/

// Importação de bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <Windows.h>  
#include <ctype.h> 

// Sessão de prototipação
void verLogin();
void verSenha();

// Variáveis globais
char user = 'L';
int senha = 123;
int i = 0;

// Programa principal
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int pwd = 0;  // pwd = password
	
	puts("Fazendo login no sistema...");
	verLogin();

} // fim do programa principal

// Função para verificar login do usuário
void verLogin()
{
	char usuario = ' ';
	printf("Login: ");
	scanf(" %c", &usuario);
		
	if(toupper(usuario) == user)
		verSenha();
	else
	{
		puts("\n======> usuário inválido - Tente novamente");
		verLogin();
	}
} // fim da função verLogin

// Função para verificar a senha do usuário
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
			puts("Senha inválida");
			i++;
			if(i <= 2)
			{
			verSenha();
			}
			else
			{
				Sleep(2000);
				puts("Senha bloqueada - Contate seu banco");
				exit(0);
			}
	}
} // fim da função verSenha
