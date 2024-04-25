#include <stdio.h>
#include <windows.h>

int main() {
    //Como colocar acentuação no windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int n, maior, menor;

    printf("Digite um numero: ");
    scanf("%d", &n);

    maior = n;
    menor = n;

    while(n >= 0) {
        if(n > maior) {
            maior = n;
        }
        if(n < menor) {
            menor = n;
        }
        printf("Digite um número: ");
        scanf("%d", &n);
    }

    printf("maior número é %d e menor é %d", maior, menor);


    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
