#include <stdio.h>
#include <windows.h>

int main() {
    //Como colocar acentuação no windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int n, maior = 0, menor = 0;

    while(1) {
        printf("Digite um número: ");
        scanf("%d", &n);
        if(n < 0){
            break;
        }
        else {
            if(maior == 0 && menor == 0){
            maior = menor = n;
            }
            if(n > maior) {
                maior = n;
            }
            if(n < menor) {
                menor = n;
            }
        }

    }

    printf("maior número é %d e menor é %d", maior, menor);


    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}