#include <stdio.h>

void exibirMenu() {
    printf("\n============================\n");
    printf(" CAIXA ELETRONICO \n");
    printf("=============================\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar Deposito\n");
    printf("0 - Sair\n");
    printf("============================\n");
    printf("Escolha uma opcao: ");
}
float realizarDeposito(float saldo){
    float valorDeposito;
    float vD= valorDeposito;
    float s= saldo;
    printf("Valor do deposito: ");
    scanf("%f", &vD);
    s+=vD;
    printf("\nDeposito feito com sucesso");
    return s;
}
float realizarSaque(float saldo) {
    float valorSaque;
    float v= valorSaque;
    float s= saldo;
    printf("Valor do saque: ");
    scanf("%f", &v);
    if(v <= s && s > 0){
    s -= v;
    printf("Sucesso!\n");
}else {
    printf("Sem saldo!\n");
}
    return s;
}
void consultarSaldo(float saldo) {
    printf("\n--- SALDO ATUAL ---\n");
    printf("R$ %.2f\n", saldo);
    printf("-------------------\n");
}
float realizarSaque(float s);
int main() {
    float saldo = 0; // 0 de saldo
    int op;
do {
    exibirMenu();
    scanf("%d", &op);
    switch(op) {
    case 1:
    consultarSaldo(saldo); break;
    case 2:
    saldo = realizarSaque(saldo); break;
    case 3:
    saldo = realizarDeposito(saldo); break;
    case 0:
    printf("Saindo...\n"); break;
    default: 
    printf("Opcao Invalida!\n"); break;
}
} while(op != 0);

return 0;
}