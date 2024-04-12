//Escreva um programa que leia três variáveis: char, int e float. Em seguida,imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char a;
    int b;
    float c;
    
    printf("char: ");
    a = getchar();
    setbuf(stdin, 0);//problema de buffer de entrada, faz limpeza antes dá próxima leitura
    
    printf("int: ");
    scanf("%d", &b);
    
    printf("float: ");
    scanf("%f", &c);

    printf("%c\t%d\t%f\t", a, b, c);
    printf("%c\n%d\n%f\n", a, b, c);
    printf("%c %d %f ", a, b, c);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}