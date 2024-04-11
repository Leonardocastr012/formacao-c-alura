#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    const int numero_random = 3;

    printf("%d", numero_random);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}