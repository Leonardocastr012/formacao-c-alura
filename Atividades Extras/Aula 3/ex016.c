//Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse número por dois (utilize os operadores de deslocamento de bits).

#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int numero, numero_bit1, numero_bit2;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    numero_bit1 = numero >> 1; // divide por 2
    numero_bit2 = numero << 1; // multiplica por 2

    printf("Multiplicado por 2: %d\n", numero_bit2);
    printf("Dividido por 2: %d", numero_bit1);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}