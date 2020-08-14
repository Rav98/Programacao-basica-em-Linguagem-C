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

#### 1. Abra o painel de controle do Windows e clique na opção ```Sistema```.
![Tutorial1](https://user-images.githubusercontent.com/46981155/90186228-3a370400-dd8e-11ea-9dd3-555ea5f60a8a.png)
__________________________________________________________________________________________________________________

#### 2. Clique na opção de ```Configurações avançadas do sistema```.
![Tutorial2](https://user-images.githubusercontent.com/46981155/90186346-65b9ee80-dd8e-11ea-8de0-ef14d1c4f731.PNG)

__________________________________________________________________________________________________________________

#### 3. Vá na aba ```Avançado``` e clique em ```Variaveis de ambiente```.
![Tutorial3](https://user-images.githubusercontent.com/46981155/90186384-74080a80-dd8e-11ea-8bfa-89cde27fd777.PNG)

__________________________________________________________________________________________________________________

#### 4. Selecione a Variavel ```Path``` e clique em ```Editar```.
![Tutorial4](https://user-images.githubusercontent.com/46981155/90186410-8124f980-dd8e-11ea-91be-5946655fa390.PNG)

__________________________________________________________________________________________________________________

#### 5. Clique em ```Novo``` e cole o local de instalação do MinGW. O caminho padrão é ```C:\MinGW\bin``` . Após colar o caminho, basta dar um ```OK```.
![Tutorial5](https://user-images.githubusercontent.com/46981155/90186460-91d56f80-dd8e-11ea-8367-63c6bcac22b2.PNG)

__________________________________________________________________________________________________________________

Agora, com o sistema configurado, basta abrir o CMD na pasta onde está o arquivo, digitando ```cmd``` no lugar do caminho da pasta, como na imagem a seguir:

