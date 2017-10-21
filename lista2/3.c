#include <stdio.h>
#include <math.h>

/*Código de  Gauss-Legendre*/

double GL()
{
        int i ;
        double a, b, t, p, a1, raiz ;
        raiz = sqrt(2) ;
        a = 1 ;
        b = 1/raiz ;
        t = (double) 1/4 ;
        p =1 ;

        for (int i=0;i<10;i++) {

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

        
        printf("%.20f\n", GL() ) ;
        return 0 ;

}



















