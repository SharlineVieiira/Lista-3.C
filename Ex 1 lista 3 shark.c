//Sharline Aparecida Vieira


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



/*
1. Escreva uma função que computa a elevência ab para valores a (double) e b (int) passados por parâmetro (não use bibliotecas como math.h). Use a função anterior e crie um programa que imprima todas as elevências: 2^0, 2^1,...2^10; 3^0,...3^10;...10^10.
*/


int main()
{
    setlocale(LC_ALL, "");

    double elev(double, int);

    for(int i=2; i<=10; i++)
    {
        for(int j=0; j<=10; j++)
        {
            if(j==0){
                printf("%d ^ %d =  1 \n", i, j);
                j++;
            }
            printf("%d ^ %d =  %lf\n", i, j, elev(i, j));
        }
        printf("\n");
    }

}

        double elev(double ba, int ex)
        {
            if(ex==0)
                return 1;
            double resul=1;
            do
            {
                resul*=ba;
                ex--;
            }
            while(ex>0);



            return resul;
}




















//Sharline Aparecida Vieira

