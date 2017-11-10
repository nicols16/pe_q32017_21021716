#include <stdio.h>
#include <math.h>

unsigned int DRC (unsigned int  x, unsigned int base)
{
        if(x<10) return base+1 ;
        return DRC(x/10,1+base) ;
}

unsigned int D (unsigned int x, unsigned int base)
{
        return DRC (x,0) ;
}

unsigned int main () {

        unsigned int x ;
        unsigned int base ;
        unsigned int digi ;
        printf ("Escreva um número: \n") ;
        scanf ("%d", &x) ;
        digi = D (x, base) ;
        printf ("A quantidade de algarismo no número digitado é: \n%d\n", digi) ;
}
