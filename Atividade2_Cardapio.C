#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h>

 int main(){ 

//Variaveis  
int prato = 0, bebida = 0, entrada = 0; 
int opcao = 0; 
int desconto = 13;
float preco_prato = 0.0, preco_bebida = 0.0, preco_entrada = 0.0, total_final = 0.0, total = 0.0; 
//apresentação 
printf("\n\n\t Ola sou seu Atendente Virtual o que gostaria de pedir?:\n\n"); 
do 
{ //inicio do fluxo
system("cls");
printf("\n \t Escolha uma das opçoes na Tela:\n\n"); 
printf("\t 1 - Pratos de Entrada.\n"); 
printf("\t 2 - Pratos Executivo.\n"); 
printf("\t 3 - Bebidas.\n"); 
printf("\t 0 - Finalizar.\n"); 
scanf("%d",&opcao); 
system("cls");
// seleçao dos pratos e bebidas 
// cada case atribui o valor para sua variavel preço, para garantir sempre a soma de varios pratos
    switch (opcao) { 
        case 1:   
        printf("\t Escolha um Prato de Entrada:\n\n"); 
        printf("\t 1 - Batatas Fritas Media = 10,00\n"); 
        printf("\t 2 - Salada Fit 200g = 12,50\n"); 
        printf("\t 3 - Frango a Passarinho = 20,00 \n"); 
        printf("\t 0 - Sair do Menu\n"); 
        scanf("%d", &entrada); 
        
        switch (entrada) { 
            case 0: break;
            case 1: preco_entrada +=  10.00; break; 
            case 2: preco_entrada += 12.50; break; 
            case 3: preco_entrada += 20.00; break; 
            default:  
                    printf("\t\t\n !! INVALIDO !!\n"); 
                    printf("\t\t\n Precione qualquer tecla para continuar:\n"); 
                    getch(); break;} 
        break;
        case 2: 
        printf("\t Escolha um Prato Executivo:\n\n"); 
        printf("\t 1 - File de Frango = 25,00\n"); 
        printf("\t 2 - Bife a Cavalo = 38,50\n"); 
        printf("\t 3 - Parmegiana de Frango = 44,00 \n"); 
        printf("\t 0 - Sair do Menu\n"); 
        scanf("%d", &prato); 
        
        switch (prato) { 
            case 0: break;
            case 1: preco_prato += 25.00; break; 
            case 2: preco_prato += 38.50; break; 
            case 3: preco_prato += 44.00; break; 
            default: 
                      printf("\t\t INVALIDA \n"); 
                      printf("\t\t\n Precione qualquer tecla para continuar:\n");
                      getch(); break; } 
        break;
        case 3: 
        printf("\t Escolha uma Bebida:\n\n"); 
        printf("\t 1 - Refrigerante = 8,00\n"); 
        printf("\t 2 - Suco Natural 500ml = 9,50\n"); 
        printf("\t 3 - Agua sem Gas 500ml = 4,00 \n"); 
        printf("\t 0 - Sair do Menu\n"); 
        scanf("%d", &bebida); 
        switch (bebida) {
           case 0: break;
           case 1: preco_bebida += 8.00; break;
           case 2: preco_bebida += 9.50; break;
           case 3: preco_bebida += 4.00; break;
           default: 
               printf("\t\t !! INVALIDA !!\n"); 
               printf(" \t\t\n Precione qualquer tecla para continuar:\n"); 
               getch(); break;}
       
               default: break;
            }
 
} while (opcao != 0); //para sair do laço com 0
  //calculo
  //atribuiçao das variaveis para o total  
total = preco_entrada + preco_prato + preco_bebida;

       system("cls");
       printf("\t\t \n\n\n! Pedido Finalizado  !"); 
       //Efetuar o desconto através if maior q 50
if (total>=50.00)  
{
   total_final=total-(total*desconto/100);
   printf("\n\t\n Desconto Concedido de 13 Porcento !");
   printf("\n\t Total Final: R$ %.2f",total_final);
}
if (total<50.00)
{
    printf("\n\n\t Desconto NAO Concedido! ");
    printf("\n\t Total sem Desconto: R$ %.2f ",total);

}
//final saldação
printf("\n\n\n\t\t Obrigado Volte Sempre!");
return 0; 

} 