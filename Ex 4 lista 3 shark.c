//Sharline Aparecida Vieira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



/*4. Escreva uma fun��o que recebe um n�mero inteiro n passado por par�metro e devolve o maior n�mero primo que � menor ou igual a n.*/


int main() {

    setlocale(LC_ALL, "");
    int s, primo;

    printf("Digite um n�mero: ");
    scanf("%d", &s);

                                                    // Encontra o proximo primo a esquerda
    for (int i=s;i>0; i--) {

                                                                    // verifica se i � primo
        primo = 1;
        for (int j=2; j<i; j++) {
            if (i % j == 0)
                primo = 0;
        }


        if (primo == 1) {
            printf("Proximo primo a esquerda �: %d\n", i);
            break;
        }
    }

    return 0;
}






//Sharline Aparecida Vieira
