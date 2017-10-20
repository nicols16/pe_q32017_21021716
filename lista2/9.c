#include <stdio.h>
#include <math.h>

/*Cálculo recursivo da potência. Recursão não caudal*/

int pot(int x, int y)
{
     
        if (y==0) return 1 ;
        return (pot(x, (y-1))*x) ;

}

/*Função principal*/

int main()
{

        int x, y ;

        scanf("%d %d", &x, &y) ;
        printf("%d\n", pot(x, (y-1))*x) ;
        return 0 ;

}
