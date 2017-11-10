#include <stdio.h>
#include <math.h>

/* Função com recursão caudal de soma*/
unsigned int somaRC (unsigned int n, unsigned int base)
{
        if(n==1) return base+1 ;
        return somaRC(n-1,n+base) ;
}

/* Função soma*/
unsigned int soma (unsigned int n, unsigned int base)
{
        return somaRC(n,0) ;
}

/*Função principal*/
unsigned int main() {

        unsigned int n ;
        unsigned int base ;
        unsigned int s ;
        printf ("Digite um número: \n") ;
        scanf ("%d", &n) ;
        s = soma (n, base) ;
        printf ("A soma dos n primeiros números é: \n%d\n", s) ;
}

