//Sharline Aparecida Vieira


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*3. Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o primeiro número da série de fibonacci que é maior ou igual a n.*/

int fibonacci(int s);
        int s;

        int main(){
            int x;
            x=fibonacci(s);


return 0;



        }
         int fibonacci(int s){
          int r=0,j=1,x;

           printf("Digite um numero:\n");
           scanf(" %d",&s);

           while(j<s){
            x=j+r;

            r=j;
            j=x;
            printf(" %d",j);
          }



        return fibonacci;
         }








//Sharline Aparecida Vieira


