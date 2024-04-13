//Elabore um programa que leia dois números inteiros e exiba o resultado das operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles.

#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int num1, num2, ou_exclusivo, ou_bit_a_bit, e_exclusivo;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numeo: ");
    scanf("%d", &num2);

    ou_exclusivo = num1^num2;
    ou_bit_a_bit = num1|num2;
    e_exclusivo = num1&num2;

    printf("x^y - OU exclusivo: %d\n", ou_exclusivo);
    printf("x|y - OU bit a bit: %d\n", ou_bit_a_bit);
    printf("x&y - E  bit a bit: %d\n", e_exclusivo);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    system("pause");
    return 0;
}