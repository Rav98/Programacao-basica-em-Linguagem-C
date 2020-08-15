// Desenvolvedor: Rafael Antunes Vieira.
// Profissão: Estudante de Ciência da Computação na Universidade Federal de Itajubá-UNIFEI.
// Idioma: Portugues-Brazil.
// E-mail: rafaelantunesvieira@outlook.com.br
// Descrição: Programa desenvolvido com o propósito de aplicar os conhecimentos sobre a função MALLOC em vetores.
// Data: 29/01/2019
// Código livre para utilização e modificação :D

#include <stdlib.h> /* Bibliotecas necessárias para o código */
#include <stdio.h>
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

    int i, number;                                /* Variável contadora para percorrer vetor e variável que recebe a quantidade de numeros que o usuário quer ter no vetor*/
    int *v = (int *)malloc(number * sizeof(int)); /* Alocação */

    /* O ( DO WHILE ) foi implementado com o intuito de evitar que o programa feche após finalizar a execução. 
     * Só irá ser fechado após o usuário confirmar apertando o enter.
     * No Windows o programa pode ser executado fora da tela do terminal, por isso, quando a execução termina 
     * a tela do programa é fechada automaticamente.    */

    char exit = '\n'; /*Variável para de controle do DO WHILE*/
    do
    {

        printf("Digite a quantidade de numeros que voce deseja armazenar:");
        scanf("%d", &number);

        for (i = 0; i < number; i++)
        {
            /*(FOR) que percorre o vetor salvando os numeros que o usuário fornece */
            printf("Digite o numero que desejas:");
            scanf("%d", &v[i]);
        }
        printf("\n\n");

        for (i = 0; i < number; i++)
        { /*(FOR) que imprime o vetor */
            printf("|%d|", v[i]);
        }

        printf("\n\nDesalocando vetor...");
        free(v);

        /* Eliminando o '\n' do buffer */
        limpar_buffer_teclado();
        printf("\n\nAperte ENTER para sair!");
        scanf("%c", exit);

    } while (exit == '\n');

    return 0;
}