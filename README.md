# Programação básica em Linguagem C
   Este repositório contém aplicações desenvolvidas para praticar os conhecimentos teóricos adquiridos sobre os seguintes temas:

- Ponteiros;
- Vetor;
- Alocação de memória;
- Strict;
- Manuseio de arquivos no disco;

## Descrição dos arquivos

- ### Alocação_de_memória.c 
    Programa desenvolvido com o propósito de aplicar os conhecimentos sobre a aplicação da função CALLOC E MALLOC.

- ### Alocação_de_vetor.c
    Programa desenvolvido com o propósito de aplicar os conhecimentos sobre a função MALLOC em vetores.

- ### File.c
    Programa desenvolvido com o propósito de aplicar os conhecimentos sobre manuseio de arquivos.

- ### Menor_e_Maior_numero_de_um_vetor.c
    Programa desenvolvido com o propósito de achar o MAIOR e o MENOR número de um vetor de inteiros.

- ### Struct.c
    Programa desenvolvido com o propósito de aplicar os conhecimentos sobre estrutura (STRUCT).

## Como executar
   Para executar os programas é preciso compilar os códigos utilizando o GCC ( GNU Compiler Collection ), que contém o compilador da linguagem de programação C. Veja, a seguir, 
   o tutorial de como fazer a **instalação**, **compilação** e **execução** dos arquivos.

- ### Sistema operacional LINUX 
  Para instalar o GCC no linux basta verificar qual distribuição é a sua e digitar o seguinte código no terminal:
  #### Distribuições baseadas no Ubuntu
      sudo apt-get install gcc
  #### Distribuições baseadas no Fedora
      sudo yum install gcc
  #### Distribuições baseadas no OpenSUSE
      sudo zypper in gcc
    
    Após a instalação do GCC, podemos compilar o programa. Para compilar, basta abrir o terminal na mesma pasta onde se encontra o arquivo do código e digitar:
    ```
    gcc Nome_do_arquivo.c -o Nome_para_o_executavel_compilado
    ``` 
    Finalmente, para executar basta digitar ```./ ```:
    ```
    ./Nome_para_o_executavel_compilado
    ```
- ### Sistema operacional Windows
Para instalar no Microsoft Windows é preciso instalar o programa MinGW.
**Site do Programa**: http://www.mingw.org/

Após a instalação é preciso fazer o Windows reconhecer o compilador. Segue abaixo um tutorial para adicionar o compilador no sistema:


