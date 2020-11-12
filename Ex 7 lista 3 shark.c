//Sharline Aparecida Vieira


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


/*7. Escreva uma fun��o chamada teste que recebe um valor inteiro positivo n como par�metro. Sua fun��o deve retornar um valor inteiro b tal que b k = n para algum inteiro k, e b seja o menor poss�vel. */


int teste(int n);

int main() {
    setlocale(LC_ALL, "");

    int s, resp;

    printf("Digite um valor de n: ");
    scanf("%d", &s);

    printf("Menor valor de b �: %d\n", teste(s));
    return 0;
}


int teste(int s) {
    int b;
    int k;
    int aux;

    if (s == 0) {
        return 0;
    }

    for (b = 2; ; b++) {
        for (k = 1; ; k++) {
            aux = pow(b, k);

            // b^k = n
            if (aux == s) {
                return b;
            }

            // se aux > n, para o for interno
            if (aux > s) {
                break;
            }
        }
    }
}







//Sharline Aparecida Vieira
