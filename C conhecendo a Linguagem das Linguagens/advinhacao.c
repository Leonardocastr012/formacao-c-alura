#include <stdio.h>
#include <windows.h>

int main() {
    //Como colocar acentuação no windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    printf("Bem vindo ao nosso jogo de advinhação\n");

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}