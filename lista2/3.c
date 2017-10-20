#include <stdio.h>
#include <math.h>

/*Código de  Gauss-Legendre*/

float GL(int a, float b, float t, int p)
{
        float a1 ;

        for (int i=0;i<=10;i++) {

        a1 = (a+b)/2 ;
        b = sqrt((a*b)) ;
        t = t-p*pow((a-a1),2) ;
        p = 2*p ;
        a = a1 ;
       
        } 

        return (pow((a+b),2)/(4*t)) ;
      
}

/*Função principal*/

int main()
{
        int a = 1, p = 1 ;
        float raiz = sqrt(2), b, t ;
        float pi ;
        b = 1/raiz ;
        t = (1/4) ;
        pi = GL(a, b, p, t) ;
        printf("%.20f\n", pi) ;

        return 0 ;
}



















