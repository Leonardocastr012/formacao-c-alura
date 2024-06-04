#include <stdio.h>
#include <windows.h>

int main (){

    char palavrasecreta[20];

    sprintf(palavrasecreta, "MELANCIA");

    printf("%s", palavrasecreta);
//último caractere da string em array tem que ser \0 para saber onde para a palavra dentro do array
}