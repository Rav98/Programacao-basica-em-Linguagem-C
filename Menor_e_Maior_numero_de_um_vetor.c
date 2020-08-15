// Desenvolvedor: Rafael Antunes Vieira.
// Profissão: Estudante de Ciência da Computação na Universidade Federal de Itajubá-UNIFEI.
// Idioma: Portugues-Brazil.
// E-mail: rafaelantunesvieira@outlook.com.br
// Descrição: Programa desenvolvido com o propósito de achar o MAIOR e o MENOR numero de um vetor.
// Data: 29/01/2019
// Código livre para utilização e modificação :D

#include <stdio.h> /* Bibliotecas necessárias para o código */
#include <locale.h>

/*Necessario para não dar problema na leitura do comando do DO WHILE a seguir no código*/
void limpar_buffer_teclado(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

int main()
{
	int v[5], i, menor, maior;

	/* O ( DO WHILE ) foi implementado com o intuito de evitar que o programa feche após finalizar a execução. 
 	 * Só irá ser fechado após o usuário confirmar apertando o enter.
 	 * No Windows o programa pode ser executado fora da tela do terminal, por isso, quando a execução termina 
 	 * a tela do programa é fechada automaticamente.    */

	char exit = '\n'; /*Variável para de controle do DO WHILE*/
	do
	{

		printf("Digite um vetor de 5 posicoes com numeros:\n\n");
		for (i = 0; i < 5; i++)
		{ /*(FOR) para receber os numeros do vetor que o usuario quer ordenar*/
			printf("Posicao %d =", i);
			scanf("%d", &v[i]);
		}
		printf("Vetor Digitado foi=\t");
		printf("(");
		for (i = 0; i < 5; i++)
		{ /*(FOR) para imprimir os numeros do vetor que o usuario digitou */
			printf("%d,", v[i]);
		}
		printf(")");

		menor = v[0]; /* Supondo uma posição qualquer do vetor para que possa haver uma comparação no codigo abaixo*/
		maior = v[0]; /* Supondo uma posição qualquer do vetor para que possa haver uma comparação no codigo abaixo*/

		for (i = 0; i < 5; i++)
		{
			while (menor > v[i])
				menor = v[i]; /*Se a posição que eu escolhi for maior que qualquer outra posição do vetor, armazeno a menor posição.*/
		}
		printf("\n\n O menor numero do vetor eh : %d\n", menor); /* Depois do ciclo FOR, imprime o menor numero do vetor*/

		for (i = 0; i < 5; i++)
		{
			while (maior < v[i])
				maior = v[i]; /*Se a posição que eu escolhi for menor que qualquer outra posição do vetor, armazeno a maior posição.*/
		}
		printf("\n O maior numero do vetor eh : %d\n", maior); /* Depois do ciclo FOR, imprime o maior numero do vetor*/
		
		/* Eliminando o '\n' do buffer */
        limpar_buffer_teclado();
		printf("\n\nAperte ENTER para sair!");
		scanf("%c", &exit);

	} while (exit != '\n');

	return 0;
}
