//Sharline Aparecida Vieira


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*2. Escreva uma função que computa o fatorial de um número inteiro n passado por parâmetro. OBS: Caso n ≤ 0 a função deve retornar 1. Use a função anterior e crie um programa que imprima os valores de n! para n = 1, . . . , 20.*/




int fat(int n) {
    int retorno = 1;
    while (n > 1) retorno *= n--;
    return retorno;
}

int main()
{
     setlocale (LC_ALL, " ");
    int n;
    printf("Digite um numero para exibir seu fatorial n:\n");
    scanf("%d", &n);
    printf("o fatorial do numero digitado e:%d\n", fat(n));


    return 0;
}











//Sharline Aparecida Vieira


