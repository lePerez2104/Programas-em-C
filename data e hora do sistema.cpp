/* 21/08/2023
PROGRAMA QUE MOSTRA A DATA E A HORA NO SISTEMA NOS SEGUINTES FORMATOS: DD/MM/AAAA - MÊS (POR EXTENSO) E HORA (MINUTO) */	

#include <stdio.h>
#include <time.h>
// Para utilização da função localtime()

int main()
{
	// tm_sec -> segundos da hora do sistema (0 - 59)
	// tm_min -> minutos da hora do sistema (0 -59)
	// tm_hour -> hora da hora do sistema (0 -23)
	// tm_mday -> dia da data do sistema (1 - 31)
	// tm_mon -> mês da data do sistema (0 -11)
	// tm_year -> ano da data do sistema (desde 1900)
	// tm_wday -> dia da semana relativo a data (0 - 6, sendo 0 = domingo)
	
	time_t t;
	struct tm * data_hora;
		int dia, mes, ano, hora, min, seg;
	t = time(NULL);
	data_hora = (localtime(&t));
		dia = data_hora -> tm_mday;
		mes = data_hora -> tm_mon + 1;
		ano = data_hora -> tm_year + 1900;
		hora = data_hora -> tm_hour;
		min = data_hora -> tm_min;
		seg = data_hora -> tm_sec;
	printf(("\nData atual: "));
	
	// Apresentar o dia da data
		if (dia<= 9)
			printf("0%d", dia);
		else
			printf("%d", dia);
			
	// Avalia mês passando por extenso
	switch(mes)
		{
			case 1: printf("/janeiro/"); break;
			case 2: printf("/março/"); break;
			case 3: printf("/fevereiro/"); break;
			case 4: printf("/abril/"); break;
			case 5: printf("/maio/"); break;
			case 6: printf("/junho/"); break;
			case 7: printf("/julho/"); break;
			case 8: printf("/agosto/"); break;
			case 9: printf("/setembro/"); break;
			case 10: printf("/outubro/"); break;
			case 11: printf("/novembro/"); break;
			case 12: printf("/dezembro/"); break;
		}
	printf("%d", ano);
	printf("\nHora atual: ");
	if(hora <= 9)
		printf("0%d ", hora);
	else 
		printf("%d ", hora);
	
	if(min <= 9)
		printf(" 0%d", min);
	else
		printf(" %d", min);
		
	if(seg <= 9)
		printf(" 0%d", seg);
	else
		printf(" %d", seg);
		
	getchar();
	return 0;
			
}
