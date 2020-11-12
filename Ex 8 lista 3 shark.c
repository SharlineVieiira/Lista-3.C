//Sharline Aparecida Vieira


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*8. Escreva uma função chamada teste que recebe um valor inteiro n (positivo ou negativo) como parâmetro. Sua função deve imprimir todos os valores a e b (inclusive negativos) tais que a ∗ b = n. */

void teste(int n);

int main() {
    setlocale(LC_ALL, "");


    int n;

    printf("Digite um valor inteiro n sendo ele (positivo ou negativo): ");
    scanf("%d", &n);

    // invoca a função teste
    teste(n);

    return 0;
}

void teste(int n) {
    int a, b;



    for (a=-n; a<=n;a++) {
        for (b=-n;b<=n;b++) {
            if (a*b == n) {
                printf("a:[%4d] * b:[%4d] = r:[%4d]\n", a,b,n);
            }
        }
    }

}


//Sharline Aparecida Vieira
