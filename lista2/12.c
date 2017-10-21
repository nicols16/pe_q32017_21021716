#include <stdio.h>
#include <math.h>

/*Função que calcula, recursivamente, o
* valor do coeficiente binomial*/

long coef(int n, int k)
{
 
        if (k==1) return n ;
        if (k==n) return 1 ;
        return coef(n-1, k-1)+coef(n-1, k) ;

}

/*Função principal*/

int main()
{

        int n, k ;
       
        scanf("%d %d", &n, &k) ;
        printf("%ld\n", coef(n, k)) ;
        return 0 ;

}

          
 



