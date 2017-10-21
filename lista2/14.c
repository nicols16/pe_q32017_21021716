#include <stdio.h>
#include <math.h>

/*Função que inverte o número*/

void palindromo(int num)
{

        int aux = num,  inv = 0 ;

        while (aux!=0) {

         inv = inv*10 + aux%10 ;
         aux = aux/10 ;

        }

        if (inv==num) printf("sim\n") ;
        else printf("nao\n") ;

}

/*Função principal*/

int main()
{

        int num ;

        scanf("%d", &num) ;
        palindromo(num) ;
        return 0 ;

}

        
