#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int dia, mes, ano;
    
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mês: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    printf("%d/%d/%d", dia, mes, ano);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}