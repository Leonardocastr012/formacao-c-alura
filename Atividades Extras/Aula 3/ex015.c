////Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido.
//Exemplo: Número lido = 123 Número gerado = 321
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numbers, num1, num2, num3;
    
    printf("Digite um numero de tres algoritmos: ");
    scanf("%d", &numbers);

    num1 = numbers % 10; //Nesse caso o vai dar resto da divisão que é unidade
    num2 = (numbers % 100) / 10; //No resto da divisão com 100 vai gerar um número em foma de dezena porém vai ter a unidade então dividimos por 10 dando um número com vírgula e como é inteiro vai pegar só a parte inteira(Ex.: 123 % 100 = 23 / 10 = 2,3 e a parte inteira é 2)
    num3 = numbers / 100; //Como vai dar só o valor da divisão e número tem no máximo 3 unidades, o resulto vai ser só a classe das centenas(Ex.: 123/100 = 1 e resto 23)

    printf("%d%d%d", num1, num2, num3);
    
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}