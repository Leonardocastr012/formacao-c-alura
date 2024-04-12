//Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float valor_em_real, cotacao_dolar, valor_em_dolar;

    printf("Valor em R$");
    scanf("%f", &valor_em_real);
    printf("Cotação do dólar hoje: ");
    scanf("%f", &cotacao_dolar);

    valor_em_dolar = valor_em_real / cotacao_dolar;

    printf("Valor em dolar: US$%.2f", valor_em_dolar);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}