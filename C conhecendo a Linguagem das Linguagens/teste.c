#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //Como colocar acentuação no windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int segundos = time(0);
    srand(segundos);

    int a = rand();
    int b = rand();
    b = abs(b);
    printf("%d %d\n", a, b);
    
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}