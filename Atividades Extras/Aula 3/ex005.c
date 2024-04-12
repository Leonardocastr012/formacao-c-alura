//Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int ano_de_nascimento, ano_atual, idade;

    printf("Escreva sua idade(levando em consideração a idade que vai fazer esse ano caso não tenha feito aniversário): ");
    scanf("%d", &idade);
    printf("Em que ano estamos? ");
    scanf("%d", &ano_atual);
    
    ano_de_nascimento = ano_atual - idade;

    printf("Você nasceu em %d!", ano_de_nascimento);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}