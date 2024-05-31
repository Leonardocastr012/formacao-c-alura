#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main() {
    //Como colocar acentuação no windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int a = 3;
    int b = -3;
    b = abs(b);
    printf("%d %d\n", a, b);
    
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}