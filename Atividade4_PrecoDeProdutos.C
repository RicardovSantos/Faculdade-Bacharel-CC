#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<string.h>

#define MAXIMO_P 10

//funçao Criada para Fazer a troca Bubble sort 
void bubbles(float precos[], char produtos[][20],int tamanho, int ordem){
    int i, j;
    float Copia_Preco;
    char Copia_Produto[20];
    int trocou;
    for (i = 0; i < tamanho - 1; i++)
    {
        trocou = 0;
        for (j = 0; j < tamanho - 1; j++)
        {
            
            int condicao = ordem == 1 ? (precos[j] > precos[j+1]):(precos[j] < precos[j+1]);
            
            if (condicao)
            {
                Copia_Preco = precos[j];
                precos[j] = precos[j+1];
                precos[j+1] = Copia_Preco;
                
                strcpy(Copia_Produto, produtos[j]);
                strcpy(produtos[j], produtos[j+1]);
                strcpy(produtos[j+1], Copia_Produto);
                trocou = 1;
            }        
    }
            if (trocou == 0)
            {
                break;
            }
    }

}

int main(){

//configuração para caracteres especiais.
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
setlocale(LC_ALL,"UTF-8");

//Declaração de Variaves
char produtos[MAXIMO_P][20];
float precos[MAXIMO_P];
int ordem;

//apresentação de tela
printf("\n\n\t Bem vindo ao Mercado Penha de França.\n");

//Capitação dos Dados dos produtos
    for (int i = 0; i < MAXIMO_P; i++) 
    {
        printf("\n\t Digite o primeiro Nome do Produto %d: ", i+1);
        scanf("%s", produtos[i]);
        printf("\t Digite o Valor do Produto %d: ",i +1);
        scanf("%f", &precos[i]);
    }

//Mostrar lista digitada
    printf("\t\n TABELA de Preços:\n");

    for (int i = 0; i < MAXIMO_P; i++)
    {
        printf("\t Produto: %s - Valor: R$ %.2f \n", produtos[i], precos[i]);
    }

do        //laço para repetir ordenaçao da lista
{
           
//capitação da configuração de ordenação e sair do laço.
        printf("\nEscolha a Ordem da Lista de Produtos: \n\n");
        printf("\t 1 -  Crescente.\n");
        printf("\t 2 -  Decrescente.\n");
        printf("\t 0 -  Sair.\n");
        printf("\t Digite: ");
        scanf("%d", &ordem);

//Chamada da Função Bubbles
if (ordem==1 || ordem==2) 
{

    
    bubbles(precos, produtos, MAXIMO_P, ordem);
    
    //imprime a lista ordenada
    printf("\n\n Ordem de Preço (%s): \n\n", (ordem == 1) ? " Crescente " : " Decrescente ");
    
    for (int i = 0; i < MAXIMO_P; i++)
    {
        printf("Produtos: %s -  Valor: R$ %.2f \n", produtos[i], precos[i]);
    }
}
    
} while (ordem!=0);

    return 0;
}