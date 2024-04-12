//Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float n1;//Sempre declarar a váriavel do tipo certo
    float n2;
    
    printf("Digite 2 número: ");
    scanf("%f %f", &n1, &n2);//Separar por espaço as máscaras
    printf(" %f e %f", n2, n1);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}