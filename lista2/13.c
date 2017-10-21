#include <stdio.h>
#include <math.h>

/*Função que calcula, recursivamente, o
*máximo divisor comum entre dois números*/

int MDC(int m, int n)
{

        int M ;

        if (n==0) return m ;
        if (m==0) return n ;
        return MDC(n,m%n) ;

}

/*Função principal*/

int main()
{

        int m, n ;

        scanf("%d %d", &m, &n) ;
        printf("%d\n", MDC(m, n)) ;
        return 0 ;

}
