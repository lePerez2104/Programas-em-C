/*
	Name: LoginSenha_RecIndireta.cpp
	Author: Letícia Vitória
	Date: 20/03/24 08:09
	Description: Programa para demonstrar a implementação de Funções Recursivas Indiretas
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>  // exit
#include <Windows.h>  // Sleep
#include <ctype.h>  // biblioteca para usar a função de conversão 'toupper', que converte caracteres de maiúsculos para minúsculos e vice-versa

// SESSÃO DE PROTOTIPAÇÃO
void verLogin();
void verSenha();

// VARIÁVEIS GLOBAIS - todas as funções enxergam essas variáveis
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

// FUNÇÃO PARA VERIFICAÇÃO DO LOGIN DO USUÁRIO
void verLogin()
{
	char usuario = ' ';
	printf("Login: ");
	scanf(" %c", &usuario);
		
	if(toupper(usuario) == user)  // se a variável local for igual a variável global
		verSenha();
	else
	{
		puts("\n======> usuário inválido - Tente novamente");
		verLogin();  // técnica de recursividade direta
	}
} // fim da função verLogin()

// FUNÇÃO PARA VERIFICAÇÃO DO SENHA DO USUÁRIO
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
			// configura recursividade indireta
			// verLogin();  // retomar a inserção de dados desde o login
			// configura recursividade direta
			verSenha();  // retomar a inserção de dados desde a senha
			}
			else
			{
				Sleep(2000);  // suspende o programa em 2s
				puts("Senha bloqueada - Contate seu banco");
				exit(0);
			}
	}
} // fim da função verSenha()
