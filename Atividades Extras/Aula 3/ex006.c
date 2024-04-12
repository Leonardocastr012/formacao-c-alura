//Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float velocidade_kmh, velocidade_ms;

    printf("Digite a velocidade em KM/H: ");
    scanf("%f", &velocidade_kmh);

    velocidade_ms = velocidade_kmh / 3.6;

    printf("%.2f km/h é %.2f m/s", velocidade_kmh, velocidade_ms);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}