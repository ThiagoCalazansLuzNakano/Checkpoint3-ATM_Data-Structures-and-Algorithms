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

    void exibirMenu() {
    printf("\n========================\n");
    printf(" CAIXA ELETRONICO \n");
    printf("========================\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar Deposito\n");
    printf("0 - Sair\n");
    printf("========================\n");
    printf("Escolha uma opcao: ");
    }
    
    return 0;
}