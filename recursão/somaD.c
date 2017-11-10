#include <stdio.h>
#include <math.h>

/* Função que conta a quantida de dígitos em um número*/
unsigned int D (unsigned int x)
{
        if(x<10) return 1 ;
        return (1+D(x/10)) ;
}

/* Função principal que chama "D"*/
unsigned int main() {

        unsigned int digi ;
        unsigned int x ;
        unsigned int A ;
        unsigned int B ;
        printf ("Escreva um número: \n") ;
        scanf ("%d", &x) ;
        digi = D(x) ;
        if(digi==1) printf ("A soma é: \n%d\n", x) ;

        if(digi==2) { 

        A = (x%10) ;
        B = (x/10) ;
        printf ("A soma é: \n%d\n", (A+B)) ;

        }
}


