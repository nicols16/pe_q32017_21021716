#include <stdio.h>
#include <math.h>

/* Calcula a soma usando recursão*/
unsigned int soma (unsigned int n)
{
        if(n==1) return 1 ;
        return (n+soma(n-1)) ;
      
}

/* Função principal que chama a soma*/
unsigned int main() {

        unsigned int n ;
        unsigned int s ;
        printf ("Escreva um número: \n") ;
        scanf ("%d", &n) ;
        s = soma (n) ;
        printf ("A soma dos n primeiros números é: \n%d\n", s) ;
}

