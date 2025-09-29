#include<stdio.h>
#include<stdio.h>
#include<locale.h>
#include<windows.h>

int main(){

//configuração para caracteres especiais.
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
setlocale(LC_ALL,"UTF-8");

printf(" ola mundo");

int numeros[5]={5,15,20,25,30};
int soma;
for (int i=0;i<5;i++)
{
     soma += numeros[i];



}
  printf("\n\n \t %d ",soma);




    return 0;
}