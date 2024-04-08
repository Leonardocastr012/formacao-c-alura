#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    printf("Início do programa\n");
    printf("Fim\n");

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}