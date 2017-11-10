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
        printf ("Escreva um número: \n") ;
        scanf ("%d", &x) ;
        digi = D (x) ;
        printf ("A quantidade de algarismo no número digitado é: \n%d\n", digi) ;
}
