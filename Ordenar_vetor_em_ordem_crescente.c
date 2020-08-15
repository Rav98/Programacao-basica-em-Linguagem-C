// Desenvolvedor: Rafael Antunes Vieira.
// Profissão: Estudante de Ciência da Computação na Universidade Federal de Itajubá-UNIFEI.
// Idioma: Portugues-Brazil.
// E-mail: rafaelantunesvieira@outlook.com.br
// Descrição: Programa desenvolvido com o propósito de ordenar um vetor preenchido pelo usuário em ordem crescente.
// Data: 29/01/2019
// Código livre para utilização e modificação :D

#include <stdlib.h> /* Bibliotecas necessárias para o código */
#include <stdio.h>
#include <locale.h>

/*Necessario para não dar problema na leitura do comando do DO WHILE a seguir no código*/
void limpar_buffer_teclado(void)
{
	int c = 0;
	while ((c = getchar()) != '\n' && c != EOF)
	{}
	return;
}

int main()
{

	int i, j, v[5], aux;

	/* O ( DO WHILE ) foi implementado com o intuito de evitar que o programa feche após finalizar a execução. 
 	 * Só irá ser fechado após o usuário confirmar apertando o enter.
 	 * No Windows o programa pode ser executado fora da tela do terminal, por isso, quando a execução termina 
 	 * a tela do programa é fechada automaticamente.    */

	char exit = '\n'; /*Variável para de controle do DO WHILE*/
	do
	{
		printf("Digite 5 numeros para o vetor!\n\n");
		for (i = 0; i < 5; i++)
		{
			printf("Posicao %d =", i);
			scanf("%d", &v[i]); /*Completar o vetor com os numeros que o usuario fornece */
		}
		printf("\n\nAntes de ordenar= ("); /*Imprimir antes de ordenar */
		for (i = 0; i < 5; i++)
		{
			printf("%d,", v[i]);
		}
		printf(")");
		for (i = 0; i < 5; i++)
		{ /* (FOR) para percorrer o vetor em uma posição */
			for (j = 0; j < 5; j++)
			{ /* (FOR) para percorrer o vetor em uma outra posição, assim tendo 2 numeros do mesmo vetor para comparar*/
				if (v[i] < v[j])
				{				 /* Se a posição de v[i] for menor que v[j]*/
					aux = v[i];	 /* Salvo a menor posição em uma variavel auxiliar */
					v[i] = v[j]; /* Passo o maior valor para a posição do v[i]*/
					v[j] = aux;	 /* Passo o menor valor para a posição do v[j] */
				}
			}
		}
		printf("\n\nDepois de ordenar= ("); /*Imprimir depois de ordenar */
		for (i = 0; i < 5; i++)
		{ /*(FOR) para percorrer o vetor*/
			printf("%d,", v[i]);
		}
		printf(")"); /*Fechar o conjunto do vetor com um parênteses*/

		/* Eliminando o '\n' do buffer */
		limpar_buffer_teclado();
		printf("\n\nAperte ENTER para sair!");
		scanf("%c", &exit);

	} while (exit != '\n');

	return 0;
}
