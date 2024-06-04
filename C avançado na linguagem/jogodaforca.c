#include <stdio.h>
#include <windows.h>

int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char palavrasecreta[20];

    sprintf(palavrasecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    do {
        //começar o nosso jogo
    } while(!acertou && !enforcou);//Vai tá dando 1 em ambas variaveis então o loop vai tá funcionando pois 1 é True
    
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}