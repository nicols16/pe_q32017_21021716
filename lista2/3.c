#include <stdio.h>
#include <math.h>

/*Código de  Gauss-Legendre*/

float GL(int a, float b, float t, int p)
{
        float a1, pi ;
        int cont ;

        while(cont<=10){

        a1 = (a+b)/2 ;
        b = sqrt((a*b)) ;
        t = t-p*pow((a-a1),2) ;
        p = 2*p ;
        a = a1 ;
        cont++ ;

        } 

        pi = pow((a+b),2)/(4*t) ;
        return pi ;
}

/*Função principal*/

int main()
{
        int a = 1, p = 1 ;
        float b = 1/sqrt(2), t ;
        float pi ;
        t = (double) (1/4) ;
        pi = GL(a, b, p, t) ;
        printf("%.20f\n", pi) ;
}



















