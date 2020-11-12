//Sharline Aparecida Vieira


#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>


/*
    6. Considere o código em C abaixo:
    #include <stdio.h>
    int soma1(int q, int c);
    int soma2(int ra);
    int i = 10;
    int j = 20;
    int main(){
    int i,k,ra,p;
    p = 10;
    ra = 5;
    for(i = 0; i< 3; i++){
    k = soma1(ra, p);
    ra = soma2(k);
    printf("%d, %d\n",ra, k);
    }
    }
    int soma1(int q, int c){
    int soma = q+i+c;
    return soma;
    }
    int soma2(int ra){
    int k = j;

    ra = ra + k;
    return ra;
    }
   (a) Determine quais são as variáveis locais e globais deste programa, identificando a que função pertence cada variável local.
(b) Mostre o que será impresso na tela do computador quando for executado este programa.

    */

// ----------------------------------------------------- RESPOSTA ----------------------------------------------------
//A) Variaveis Global: i,j - Variaveis Local:(i,k,ra,p = pertecente a função main) (q,c = pertecente variavel soma1).


/*B) Vai imprimir: 45,25
           85,65
           125,105
*/




    int soma1(int q, int c);
    int soma2(int ra);
    int i = 10;
    int j = 20;
    int main()
    {
        int i,k,ra,p;
        p = 10;
        ra = 5;
        for(i = 0; i< 3; i++)
        {
            k = soma1(ra, p);
            ra = soma2(k);
            printf("%d, %d\n",ra, k);
        }
    }
    int soma1(int q, int c)
    {
        int soma = q+i+c;
        return soma;
    }
    int soma2(int ra)
    {
        int k = j;

        ra = ra + k;
        return ra;
    }

















//Sharline Aparecida Vieira
