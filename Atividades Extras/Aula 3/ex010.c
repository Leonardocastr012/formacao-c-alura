//A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
//i. O primeiro ganhador receberá 46% do total.
//ii. O segundo receberá 32% do total.
//iii. O terceiro receberá o restante.
//Calcule e imprima a quantia recebida por cada um dos ganhadores.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    double primeiro_ganhador, segundo_ganhador, terceiro_ganhador;

    primeiro_ganhador = 780000 * 0.46;
    segundo_ganhador = 780000 * 0.32;
    terceiro_ganhador = 780000 * 0.22;

    printf("O primeiro ganhou %.0f reais\nO segundo ganhou %.0f reais\nO terceiro ganhou %.0f reais", primeiro_ganhador, segundo_ganhador, terceiro_ganhador);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}