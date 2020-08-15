// Desenvolvedor: Rafael Antunes Vieira.
// Profissão: Estudante de Ciência da Computação na Universidade Federal de Itajubá-UNIFEI.
// Idioma: Portugues-Brazil.
// E-mail: rafaelantunesvieira@outlook.com.br
// Descrição: Programa desenvolvido com o propósito de aplicar os conhecimentos sobre manuseio de arquivos em linguagem c.
// Data: 29/01/2019
// Código livre para utilização e modificação :D

#include <stdio.h> /* Bibliotecas necessárias para o código */
#include <stdlib.h>
#include <locale.h>

int main()
{

    char escrito[1024];             /* Ponteiro CHAR para armazenar o que vai ser escrito no arquivo */
    FILE *arquivo;                  /* Ponteiro do tipo FILE para manusear os arquivos */


    /* O ( DO WHILE ) foi implementado com o intuito de evitar que o programa feche após finalizar a execução. 
     * Só irá ser fechado após o usuário confirmar apertando o enter.
     * No Windows o programa pode ser executado fora da tela do terminal, por isso, quando a execução termina 
     * a tela do programa é fechada automaticamente.    */

        char exit = '\n'; /*Variável para de controle do DO WHILE*/
    do
    {
        arquivo = fopen("arquivo.txt", "w"); /*Criar o arquivo com permissão para escrever no mesmo */
        if (arquivo == NULL)
        {
            printf("Erro ao criar o arquivo!\n"); /*Verificando se foi criado o arquivo*/
            return 1;
        }
        else
        {
            printf("Arquivo criado com sucesso!\n");
        }
        printf("\nDigite algo:");
        fgets(escrito,sizeof(escrito),stdin);
        fprintf(arquivo, "%s", escrito); /* Escreve o que sera armazenado na string */
        printf("\n\nO Arquivo foi escrito com sucesso!\n");
        fclose(arquivo); /*Fecha o arquivo com segurança!*/

        printf("\n\nAperte ENTER para sair!");
        scanf("%c",&exit);

    } while (exit != '\n');

    return 0;
}
