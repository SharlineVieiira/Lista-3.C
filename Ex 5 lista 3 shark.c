//Sharline Aparecida Vieira


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*5. Escreva uma fun��o que recebe um n�mero ponto flutuante n passado por par�metro e devolve a raiz quadrada de n.*/


float raiz_quadrada(float n){
    float raiz2;

    raiz2 = sqrt(n);

    return raiz2;
}

int main()
{
    float s;
    printf("Digite um valor para N: ");
    scanf("%f", &s);

    printf("Raiz -> %.2f", raiz_quadrada(s));
}












//Sharline Aparecida Vieira


