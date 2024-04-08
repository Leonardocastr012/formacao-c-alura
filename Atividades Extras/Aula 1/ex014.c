#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char a, b, c;
    
    printf("Letra 1: ");
    a = getchar();
    setbuf(stdin, 0);//problema de buffer de entrada, faz limpeza antes dá próxima leitura
    printf("Letra 2: ");
    b = getchar();
    setbuf(stdin, 0);
    printf("Letra 3: ");
    c = getchar();
    setbuf(stdin, 0);

    printf("%c\n%c\n%c\n", a, b, c);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}