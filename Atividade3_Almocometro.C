#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
 
setlocale(LC_ALL,"");  //para carcter especiais

//Variaveis 
int i, almoco[7];
char dias[7][10]={"Segunda","Terça","Quarta","Quinta","Sexta","Sabado","Domingo"};
float soma = 0.0;
//Apresentação / Inicio.
system("cls");
wprintf(L"\n\t\t Seja bem vindo ao APP ALMOÇOMETRO !\n\n");

//laço para pegar a quantidade de almoços inseridos. 
    for (i=0; i<7; i++) {

    wprintf(L"\n\t Digite quantos almoços Sairam -");
    printf(" %s : ",dias[i]);
    scanf("%d", &almoco[i]); }
    system("cls");
    wprintf(L"\n\n\t Resumo Quantidade de Almoços na Semana: ");
    //Laço para imprimir os dados ao mesmo tempo que as somam.
    for (i=0; i<7; i++) {

   printf("\n\n\t - %s - Sairam: %d ",dias[i], almoco[i]);
   wprintf(L"- Almoços.");
   //soma dos dados
   soma+= almoco[i];
}
printf("\n\n\t Total: %.0f",soma);
//Calculo da media entre os 7 dias da semana
wprintf(L"\n\n\t Media de Almoços: %.0f", soma/7);

    return 0;
}