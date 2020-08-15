// Desenvolvedor: Rafael Antunes Vieira.
// Profissão: Estudante de Ciência da Computação na Universidade Federal de Itajubá-UNIFEI.
// Idioma: Portugues-Brazil.
// E-mail: rafaelantunesvieira@outlook.com.br
// Descrição: Programa desenvolvido com o propósito de aplicar os conhecimentos sobre a aplicação da função CALLOC E MALLOC.
// Data: 29/01/2019
// Código livre para utilização e modificação :D

#include <stdio.h> /* Bibliotecas necessárias para o código */
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
	char *nome, *nome2; /* nome (Teste com malloc) e nome2 (Teste com calloc) */
	int i = 0;			/* auxiliar para percorrer as strings */

	nome = (char *)calloc(1, sizeof(char) + 1); /* Alocação de memoria usando as funções */
	nome2 = (char *)malloc(sizeof(char) + 1);

	/* O ( DO WHILE ) foi implementado com o intuito de evitar que o programa feche após finalizar a execução. 
	 * Só irá ser fechado após o usuário confirmar apertando o enter.
	 * No Windows o programa pode ser executado fora da tela do terminal, por isso, quando a execução termina 
	 * a tela do programa é fechada automaticamente.                                            */

	char exit = '\n'; /*Variável para de controle do DO WHILE*/
	do
	{
		printf("Ola, estou testando alocacao de memoria com CALLOC!\n\nImportante ressaltar que a funcao calloc atribui o valor 0 a cada espaco alocado, limpando o lixo de memoria.\n\nDigite algo:");

		/* Recebe uma entrada do usuário, se ela for diferente da tecla (ENTER)= "\n" , salva na string */
		while ((nome[i] = getchar()) != '\n')
		{
			i++; /* Após salvar no vetor de string , ele avança para a proxima casa do vetor */
		}
		nome[i++] = '\0'; /* Na última posição da string , coloca-se a condição de termino de uma string "\0" */

		i = 0;
		printf("\nAlocado com Calloc:");
		while (nome[i] != '\0')
		{
			printf("%c", nome[i]); /* Enquanto não chegar na condição final da string "\0", 
									* imprime a casa do vetor e avança para a proxíma.        */
			i++;
		}
		printf("\n\n--------------------------");
		printf("\n\nEstou testando alocacao de memoria com MALLOC!\n\nA funcao malloc somente aloca o espaco na memoria, nao atribui nenhum valor aos espacos alocados, podendo haver lixo de memoria.\n\nDigite algo:");

		i = 0;
		/* Recebe uma entrada do usuário, se ela for diferente ta tecla (ENTER) ="\n" , salva na string */
		while ((nome2[i] = getchar()) != '\n')
		{
			i++; /* Após salvar no vetor de string , ele avança para a proxíma casa do vetor */
		}
		nome2[i++] = '\0'; /* Na última posição da string , coloca-se a condição de termino de uma string "\0" */

		i = 0;
		/* Enquanto não chegar na condição final da string "\0", imprime a casa do vetor e avança para a proxíma caractere  */
		printf("\nAlocado com Calloc:");
		while (nome2[i] != '\0')
		{
			printf("%c", nome2[i]);
			i++;
		}
		
		printf("\n\n--------------------------");
		printf("\n\nDesalocando a memoria....");
		free(nome);
		free(nome2);

		printf("\n\nAperte ENTER para sair!");
		scanf("%c",exit);

	} while (exit == '\n');

	return 0;
}