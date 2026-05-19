#include<stdio.h>
int main(){
    int opcao;
    do {
    system("cls"); // Limpa a tela
    exibirMenu();
    scanf("%d", &opcao);
    // Processamento da opcao...
    } while(opcao != 0);
    printf("Obrigado por usar nosso ATM!");

    return 0;
}