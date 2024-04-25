//Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir:

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, escolha;
    
    printf("Digite 3 numeros inteiros: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Escolha uma media:\n[1]Geometrica\n[2]Ponderada\n[3]Harmonica\n[4]Aritmetica\n ");
    scanf("%d", &escolha);
    switch (escolha){
        case 1:{
            float media = cbrt(a*b*c);// como é a raiz da quantidade números e são 3 importei a raiz cúbica
            printf("Media Geometrica: %.2f", media);
        }
            break;
        case 2:{
            float media = (a + (2*b) + (3*c))/6;
            printf("Media Ponderada: %.2f", media);
        }
            break;
        case 3:{
            float media = 1/((1/a)+(1/b)+(1/c));
            printf("Media Harmonica: %.2f", media);
        }
            break;
        case 4:{
            float media = (a + b + c)/3;
            printf("Media Aritmetica: %.2f", media);
        }
            break;
        default: printf("Coloque um numero valido!");
            break;
     }
     return 0;
}