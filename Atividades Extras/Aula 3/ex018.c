//Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à direita, do primeiro número pelo segundo.

#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero, posicao, deslocamento_esquerda, deslocamento_direita;

    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("Quantas posicoes deseja deslocar? ");
    scanf("%d", &posicao);

    deslocamento_esquerda = numero<<posicao;
    deslocamento_direita = numero>>posicao;

    printf("Deslocamento a esquerda: %d\n", deslocamento_esquerda);
    printf("Deslocamento a direita: %d\n", deslocamento_direita);
    
    SetConsoleOutputCP(CPAGE_DEFAULT);
    system("pause");
    return 0;
}