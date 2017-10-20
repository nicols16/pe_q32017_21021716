#include <stdio.h>
#include <math.h>

int fibMem[1000];

int fib(int n)
{

        int coef, pos ;


        if (n==0) return 0 ;
        if (n<=2) return 1 ;
        coef = fib(n-1) + fib(n-2) ;
        if (fibMem[n] != coef) {

         fibMem[n] = coef ;

        }

        pos = *(fibMem+n) ;

        return pos;

}

int main()
{

        int n ;

        fibMem[1] = 1 ;
        fibMem[2] = 1 ;

        scanf("%d",  &n) ;
        printf("%d\n", fib(n)) ;
        return 0 ;

}


