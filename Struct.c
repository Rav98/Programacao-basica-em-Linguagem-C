// Desenvolvedor: Rafael Antunes Vieira. 
// Profissão: Estudante de Ciência da Computação na Universidade Federal de Itajubá-UNIFEI.
// Idioma: Portugues-Brazil. 
// E-mail: rafaelantunesvieira@outlook.com.br 
// Descrição: Programa desenvolvido com o propósito de aplicar os conhecimentos sobre estrutura (STRUCT).
// Data: 29/01/2019
// Código livre para utilização e modificação :D 


#include <stdio.h>     /* Bibliotecas necessárias para o código */
#include <locale.h>           
#include <string.h>

struct infoPC{
	char placa_video[40];
	char memoria_video[10];       /* O conteudo da estrutura */        
	char processador[40];
	char freguencia_processador[10];
	char memoria_ram[40];
	char memoria[10];

}pc;

int main (){
	int i;                                /*Variável para percorrer cada parte do vetor de string*/
	
	/* O ( DO WHILE ) foi implementado com o intuito de evitar que o programa feche após finalizar a execução. 
	 * Só irá ser fechado após o usuário confirmar apertando o enter.
	 * No Windows o programa pode ser executado fora da tela do terminal, por isso, quando a execução termina 
	 * a tela do programa é fechada automaticamente. */
	
	char exit='\n';	                      /*Variável para de controle do DO WHILE*/
	do{
		i=0;														 /*Variável para percorrer cada parte do vetor de string*/
		printf("\nDigite o modelo da PLACA DE VIDEO: ");	
		while((pc.placa_video[i]=getchar())!='\n' && i<39){          /* Recebe uma entrada do usuário, se ela for diferente ta tecla (ENTER)= "\n" , salva na string */
			i++;                                                     /* Após salvar no vetor de string , ele avança para a próxima casa do vetor */
		}
		pc.placa_video[i++]='\0';                                    /* Na última posição da string , coloca-se a condição de término de uma string "\0" */
		//-------------------------------------//
		i=0;                                                         /*Variável para percorrer cada parte do vetor de string*/
		printf("Digite o modelo do PROCESSADOR: ");
		while((pc.processador[i]=getchar())!='\n' && i<39){          /* Recebe uma entrada do usuário, se ela for diferente ta tecla (ENTER)= "\n" , salva na string */
			i++;                                                     /* Após salvar no vetor de string , ele avança para a próxima casa do vetor */
		}
		pc.processador[i++]='\0';                                    /* Na última posição da string , coloca-se a condição de término de uma string "\0" */
		//-------------------------------------//
		i=0;                                                         /*Variável para percorrer cada parte do vetor de string*/
		printf("Digite o modelo da MEMORIA RAM: ");                
		while((pc.memoria_ram[i]=getchar())!='\n' && i<39){          /* Recebe uma entrada do usuário, se ela for diferente ta tecla (ENTER)= "\n" , salva na string */
			i++;                                                     /* Após salvar no vetor de string , ele avança para a próxima casa do vetor */
		}
		pc.memoria_ram[i++]='\0';                                    /* Na última posição da string , coloca-se a condição de término de uma string "\0" */
		//-------------------------------------//
		i=0;                                                         /*Variável para percorrer cada parte do vetor de string*/
		printf("Quantia em gigabytes de memoria de VIDEO: ");
		while((pc.memoria_video[i]=getchar())!='\n' && i<9){         /* Recebe uma entrada do usuário, se ela for diferente ta tecla (ENTER)= "\n" , salva na string */
			i++;                                                     /* Após salvar no vetor de string , ele avança para a próxima casa do vetor */
		}
		pc.memoria_video[i++]='\0';                                  /* Na última posição da string , coloca-se a condição de término de uma string "\0" */
		//-------------------------------------//
		i=0;                                                         /*Variável para percorrer cada parte do vetor de string*/
		printf("Freguencia do Processador (GHZ):");
		while((pc.freguencia_processador[i]=getchar())!='\n' && i<9){   /* Recebe uma entrada do usuário, se ela for diferente ta tecla (ENTER)= "\n" , salva na string */
			i++;                                                        /* Após salvar no vetor de string , ele avança para a próxima casa do vetor */
		}
		pc.freguencia_processador[i++]='\0';                            /* Na última posição da string , coloca-se a condição de término de uma string "\0" */
		//-------------------------------------//
		i=0;                                                         /*Variável para percorrer cada parte do vetor de string*/
		printf("Quantia em gigabytes de MEMORIA RAM: ");
		while((pc.memoria[i]=getchar())!='\n' && i<9){               /* Recebe uma entrada do usuário, se ela for diferente ta tecla (ENTER)= "\n" , salva na string */
			i++;                                                     /* Após salvar no vetor de string , ele avança para a próxima casa do vetor */
		}
		pc.memoria[i++]='\0'; 									     /* Na última posição da string , coloca-se a condição de término de uma string "\0" */
    	//-------------------------------------//

		/* Imprimir as entradas obtidas que foram salvas em uma estrutura  */

		printf("\n\n------- Dados do computador informado -------\n");
		printf("| Modelo da Placa de video: %s\n", pc.placa_video);
		printf("| Modelo do Processador: %s\n", pc.processador);
		printf("| Modelo da Memoria Ram: %s\n", pc.memoria_ram);
		printf("| Quantia de Memoria de Video: %s\n", pc.memoria_video);                       
		printf("| Frequencia do Processador: %s\n", pc.freguencia_processador);
		printf("| Quantia de Memoria Ram:%s\n", pc.memoria);
		printf("\n\nAperte ENTER para sair!");
		scanf("%c",exit);
	
	}while(exit=='\n');

	return 0;
}
